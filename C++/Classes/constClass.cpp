#include <iostream>


class T
{
public:
  T(){};
  void set(double val) {a = val;}
  const double get() const {return a;}
  double cget() const {return 3.;}
private:
  double a;
};

int main(){

  const T t;

  const double tv(t.cget());

  //t.set(3.);
  //tv = t.get();
  t.cget();

  std::cout << "TV is " << tv << std::endl;

  // tv = 10;

  // std::cout << "TV is " << tv << std::endl;

}