using namespace std;

#include <iostream>
#include "boost_ex.hpp"

double integrand(const double x){

  if(x >= 2 and x <=3.5){
    return x*x;
  }
  return 0.;
    //}
    //else{
    //return 0.;
    //}
}


int main(){

  cout << "Integral is: " << integral(0.0, 10., 0.0001, integrand) << endl;
  //cout << "Integral2 is: " << integral2(1.0, 8., 0.0001, integrand) << endl;
  
}
