using namespace std;
#include <algorithm>
#include <iostream>

int main(){
  double arr[] = {2., 3., 5.};

  std::cout << count_if(arr, arr+3, std::bind2nd(std::less<double>(), 0.)) << std::endl;

}
