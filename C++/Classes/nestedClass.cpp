//THis is code to test whether one can define a nested class which extends the same base class as it's parent

using namespace std;
#include <iostream>

class A
{
public:
  A(){cout << "Called A constructor" << endl; };
protected:
  void print(){cout << "This is a parent class print" << endl;}
};

class B : public A
{
public:
  B() : A(){cout << "Called B Constructor" << endl; C Cinst(); C();};
  
private:
  class C : public A
  {
  public:
    void operator()(){print();} 
  };
};


int main(){
  //A * Ainst = new A();
  B * Binst = new B();
}
