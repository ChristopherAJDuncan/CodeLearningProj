using namespace std;
#include<iostream>

void func(double * ptr) {
  if(ptr){
      cout << "Pointer is not null" << endl;
    }
  else{
    cout << "Pointer is null" << endl;
  }
}

int main()
{

  //double pttr[3] = {1.,2.,3.};
  double * pttr = NULL;

  //func(pttr);
  func();

}
