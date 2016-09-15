#include <iostream>
#include <stdexcept>

void throwFunc(bool bl){
  if (bl) throw std::runtime_error("This is a runtime error");
}


int main(){
  try{
    throwFunc(false);
  }
  catch(...){
    std::cout << "I have successfully caugth an exception!" << std::endl;
  }
}
