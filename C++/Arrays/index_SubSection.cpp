#include <iostream>
#include <vector>

int main(){

  std::vector<double> orig(10, 0.);
  //Set orig
  for (int i = 0; i< orig.size(); i++) orig[i] = i;

  int upper = 9;
  int lower = 8;
  std::vector<double> nw(upper-lower+1, 10000.);
  std::cout << "New size: " << nw.size() << std::endl;
  for (int ii = 0; ii< nw.size(); ii++){
    nw[ii] = orig[lower+ii];
    std::cout << "nw is " << ii << " :: " << nw[ii] << std::endl;
  }

}
