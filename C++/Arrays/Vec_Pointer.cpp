using namespace std;
#include <iostream>
#include <vector>

void print_Array(vector<double> vector){
  cout << "Called Vector Form" << endl;
  float j;
  for (int i = 0; i<vector.size(); i++) cout << "Vec element " << i << vector[i] << endl;
  }

/*void print_Array(double *arr){ //THis form edits arr
  cout << "Called Array Pointer Form" << endl;
  // Treats array as array
  for (int i = 0; i<5; i++) {
    cout << "Array element " << i << arr[i] << endl;
    arr[i] *= 2;
  }
  }*/
void print_Array(const double arr[]){ //This is treated like an array pointer anyway, and therefore is edited on run-time (suggests on heap, not stack)
  cout << "Called Array Form" << endl;
  // Treats array as array
  for (int i = 0; i<5; i++) {
    cout << "Array element " << i << arr[i] << endl;
    arr[i] *= 2;
  }
  }



int main(){

  double array[5];
  vector<double> vec(5);

  for (int i = 0; i<5; i++){
    array[i] = i;
    vec[i] = i;
  }

  cout << "Vector Pointer....";
  print_Array(&vec[0]); // This calls the array or the array pointer form

  cout << "Vector....";
  print_Array(vec); //This requires a specific function to act on vectors, cannot be used with array or array pointer form


  cout << "Array....";
  print_Array(array);
    
  cout << "Array....";
  print_Array(array); //This shows whether edited (i.e. heap)


}


