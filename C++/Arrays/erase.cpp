#include <vector>
#include <iostream>

int main()
{
  std::vector<double> v(10,0.);
  for (int i = 0; i < v.size(); i++) v[i] = i;

  std::cout << "Before \n";
  for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
  std::cout << "\n";

  v.erase(v.begin(), v.begin()+0);
  v.erase(v.end()-2, v.end());

  std::cout << "After \n";
  for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
  std::cout << "\n";

}