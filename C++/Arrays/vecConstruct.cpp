#include <iostream>
#include <vector>

int main(){
  const size_t nx = 10;
  double * arr = new double[nx];

  for (int i = 0; i < nx; i++) arr[i] = i;

  std::vector<double> vec(&arr[2], &arr[5]);

  for (int i = 0; i < vec.size(); i++) std::cout << "Vector is " << vec[i] << std::endl;;


}
