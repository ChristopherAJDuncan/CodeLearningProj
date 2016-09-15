#include <vector>
#include <iostream>

int main(){

  std::cout << "TESTING VECTOR" << std::endl;

  std::vector<double> vec;

  std::cout << "Vec Size Before" << vec.size() << " " << vec.capacity() << std::endl;

  vec.reserve(10);

  std::cout << "Vec Size After Reserve" << vec.size() << " " << vec.capacity() << std::endl;

  for (int i = 0; i<10/2; i++) vec.push_back(i);

  for (int i = 0; i<vec.size(); i++) std::cout << " VEC: " << vec[i] << std::endl;

  //vec.shrink_to_fit(); //C++11
  vec.resize(vec.size());

  std::cout << "Vec Size After Shrink" << vec.size() << " " << vec.capacity() << std::endl;

  std::vector<double> nVec(vec.size());
  std::copy(vec.begin(), vec.begin()+vec.size(), nVec.begin());

  std::cout << "Vec Size After Copy" << nVec.size() << " " << nVec.capacity() << std::endl;
}
