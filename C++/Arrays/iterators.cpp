#include <vector>
#include <iostream>
#include <algorithm>

int main(){
  std::vector<double> vec(10, 0.);

  vec[2] = 5.;

  std::cout << "Vector maximum is at " << std::max_element(vec.begin(), vec.end())-vec.begin() << " :: " << std::endl;

}
