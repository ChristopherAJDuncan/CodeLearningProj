#include <iostream>
#include <vector>
#include <numeric>

void fun(std::vector<double> * v){
  if(v) *v = std::vector<double>(100, 1.);
}

void print(std::vector<double> * x){
  std::cout<< " HEllo";
}

int main(){
  std::vector<double> vec(150, 0.);
  
  std::cout << vec.size() << " " << std::accumulate(vec.begin(), vec.end(), 0.) << std::endl;

  fun(&vec);

    //print(std::vector<double>(1,1.));

  std::cout << vec.size() << " " << std::accumulate(vec.begin(), vec.end(), 0.) << std::endl;


}
