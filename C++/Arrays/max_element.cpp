using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  double arr[5] = {1,3,15,-2,6};
  vector<double> varr(&arr[0], &arr[0]+5);
  //varr = 

  cout << "Size checks:" << std::begin(arr) << std::end(arr);

  //cout << "Max element:" << *max_element(arr[0], arr[4]);
  vector<double>::iterator max = max_element(varr.begin(), varr.end());
  cout << "Max element, vector:" << *max << " at position " << distance(varr.begin(), max) << ". Check " << varr[distance(varr.begin(), max)] << endl;

}
