//Example taken directly from http://www.boost.org/doc/libs/1_53_0/libs/multiprecision/doc/html/boost_multiprecision/tut/floats/fp_eg/gi.html
#include<vector>
#include <iostream>
#include<numeric>
#include<math.h>

template<typename value_type, typename function_type>
inline value_type integral(value_type a,
                           value_type b,
                           const value_type tol,
                           function_type func)
    {
    unsigned n = 1U;

    value_type h = (b - a);
    value_type I = (func(a) + func(b)) * (h / 2);

    bool converged = false;
    bool initial_divide = false;

    //Max number of iterations can be changed here, default was 8
    for(unsigned k = 0U; k < 8U; k++)
      {
	h /= 2;

	value_type sum(0);
	std::vector<value_type> eval(n, 0.);
	for(unsigned j = 1U; j <= n; j++)
	  {
	    eval[j-1] = func(a + (value_type((j * 2) - 1) * h));
	    //std::cout << "FUnction evaluated at : " << a + (value_type((j * 2) - 1) * h) << " Limit is: " << a + (value_type((n * 2) - 1) * h) + h << " support is :" << b << std::endl;
	    std::cout <<  "Csomparison " << (b-(a + (value_type((n * 2) - 1) *h) + h))/h << " " << h << " " << n << std::endl;
	  }
	sum = std::accumulate(eval.begin(), eval.end(), 0.);

	//std::cin.ignore();

	const value_type I0 = I;
	I = (I / 2) + (h * sum);

	if(I0 == 0. and I != 0.){
	  //Reduce the range of the support to only the range 
	  int lo = -1; int hi = -1;
	  for (int ii = 0; ii < eval.size(); ii++){
	    if(eval[ii] != 0.){
	      if(lo < 0) lo = ii+1;
	      if(ii>hi) hi = ii+1;
	    }
	  }
	  //std::cout << "SUpport range found to be " << lo << " " << hi << std::endl;
	  b = a+(value_type((hi * 2) - 1) * h + h); a = a+(value_type((lo * 2) - 1) * h - h); 
	  std::cout << "Limit changed to " << a << " " << b << std::endl;
	  initial_divide = true; continue;
	}
	else if(initial_divide and eval[0] == 0 and eval[n] == 0){
	  b -= h;
	  a += h;
	  n = 2*(n-1);
	  std::cout << "Sub-division unsuccessful, range edited to " << a << " " << b << " " << n << std::endl;
	  //std::cin.ignore();
	  continue;
	}
	else{
	  n *= 2U;
	}

	const value_type ratio     = I0 / I;
	const value_type delta     = ratio - 1;
	const value_type delta_abs = ((delta < 0) ? -delta : delta);

	if((k > 1U) && (delta_abs < tol))
	  {
	    converged = true;
	    break;
	  }
      }

    if(!converged) {
      std::cout << "Integral: " << I << " did not converge!!! "<<std::endl;
      //throw std::runtime_error("CppNumUtil: integral : integral did not converge!");
    }

    std::cout << "Integral returned with support " << a << " " << b << std::endl;

    return I;
  }


///NOTE: THERE IS SOME ISSUE HERE WHEN A/= 0, but leaving for now as we can use the above
template<typename value_type, typename function_type>
inline value_type integral2(value_type a,
                           value_type b,
                           const value_type tol,
                           function_type func)
{
  //Find finite support
  value_type h0 = (b - a);

  int k = 10;
  value_type h = h0/pow(2.,k);
  unsigned n = pow(2,k);
  bool lo = false; bool hi = false;
  for (int i  = 0; i<n; i++){
    if(func(a+i*h) == 0. and func(a+(i+1)*h) != 0.){
      a = a+i*h;
      lo = true;
    }
    if(lo and func(a+i*h) != 0. and func(a+(i+1)*h) == 0.){
      b = a+(i+1)*h;
      hi = true;
    }
    if(lo and hi) break;
  }

  std::cout << "Finite support found to be: " << a << " " << b << std::endl;
  std::cin.ignore();

  n = 1U;
  value_type I = (func(a) + func(b)) * (h / 2);

  for(unsigned k = 0U; k < 80U; k++)
    {
    }

  return I;
}
  /*
      h /= 2;

      value_type sum(0);
      std::vector<value_type> eval(n, 0.);
      for(unsigned j = 0U; j <= n; j++)
	{
	  eval[j-1] += 0.5*h*(func(a+j*h)+func(a+(j+1)*h));
	}
      sum = std::accumulate(eval.begin(), eval.end(), 0.);

      

      const value_type I0 = I;
      I = sum;

      //std::cout << "For k : " << k << " integral estimated to be " << I << " .. Old is " << I0 << std::endl;

      const value_type ratio     = I0 / I;
      const value_type delta     = ratio - 1;
      const value_type delta_abs = ((delta < 0) ? -delta : delta);

      if((I != 0.) && (k > 1U) && (delta_abs < tol))
	{
	  std::cout << "Success with k: " << k << " and h " << h << std::endl;
	  break;
	}

      n *= 2U;
  */
