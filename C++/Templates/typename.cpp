#include <iostream>

class functor
{
public:
  double operator()(){std::cout << "FUNCTOR CALL" << std::endl; return 1000.;};
};

class tClass
{
public:
  template<class C>
  void doIt(C c){
    std::cout << "Class call " << c() << std::endl;
  }
  
  template<typename T>
  void doIt(T t){
    std::cout << "Typename call " << c() << std::endl;
  }

};


int main{
  tClass TT;
  functor funct;

  std::cout << "Functor call::::" <<std::endl;
  TT(funct);

  std::cout << std::endl << std::endl << "Double Call::::" << std::endl;
  TT(3.0);


}
