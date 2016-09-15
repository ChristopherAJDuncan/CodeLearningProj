#include <iostream>
//#include <math.h>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/detail/erf_inv.hpp>

int main(){

  double param = 1.;
  std::cout << "Error function " << erf(param) << std::endl;
  std::cout << "Inverse Error function " << erf_inv(param) << std::endl;

}
