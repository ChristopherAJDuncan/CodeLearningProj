#include <iostream>

class arrP
{
public:
  arrP(const size_t n, const double v){
    arr = new double[n];
    arr[1] = 1.;

    std::cout << arr[1] <<std::endl;
    
    for (int i = 0; i < n; i++){
      arr[i] = v;
      std::cout << arr[i] << std::endl;
    }
  }

  ~arrP(){delete [] arr;}

private:
  double * arr;

};

int main(){
  arrP arp(3, 5.);
}
