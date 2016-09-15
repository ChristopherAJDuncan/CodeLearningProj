using namespace std;
#include <iostream>

class A{
public:
  A(int i){ aa = i;}
  void operator() (){print();}
  void print(){cout << "From A, aa is " << aa << endl;}
  void print2(){this->print();}  

protected:
  int aa;
};



class B : public A{
public:
  B(int i):A(i){bb = i;}
  void operator()(){print();}
  void print(){ cout << "From B, bb is " << bb << ". aa is " << aa << endl;}

private:
  int bb;
};

int main(){
  A AA(5);
  B BB(10);

  AA.print();
  BB.print();

  AA();
  BB();

  AA.print2();
  BB.print2();
    

}