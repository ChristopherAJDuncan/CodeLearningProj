//This is to test how varabiels change as each loop progresses
#include <iostream>

int main(){

  int start = 0;
  int end = 10;
  int space = 1;

  std::cout << std::endl << " For != and += " << std::endl;
  for(int ii = start; ii != end; ii+=space)
    std::cout << ii << " ";
  std::cout << std::endl;

  std::cout << std::endl << " For < and += " << std::endl;
  for(int ii = start; ii < end; ii+=space)
    std::cout << ii << " ";
  std::cout << std::endl;

  std::cout << std::endl << " For <= and += " << std::endl;
  for(int ii = start; ii <= end; ii+=space)
    std::cout << ii << " ";
  std::cout << std::endl;


}
