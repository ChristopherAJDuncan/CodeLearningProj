#include <vector>
#include <iostream>
#include <numeric>

int main()
{
  std::vector<int> v(9,0);
  for (int i = 0; i < v.size(); i++) v[i] = i+1;

  size_t maxIndex = 5;

  int sum = std::accumulate(v.begin(), v.begin()+maxIndex,0.);
  int product = std::accumulate(v.begin(), v.begin()+maxIndex,1, std::multiplies<int>());
    
  std::cout << "Sum is " << sum <<std::endl;
  std::cout << "Product is " << product <<std::endl;
    

}
