#include <iostream>

using namespace std;

int main() {

	// using "-1" as my cardinal value
	int values[] = {10,30,50,70,44,-1};
	int length;

	length = -1;
	while (values[++length] != -1) ;

// "Direct"

	for (int k=0; k<length; k++) {
		cout << values[k] << endl;
	}

// Pointer - with memory address

	for (int k=0; k<length; k++) {
		int *valpointer = &values[k];
		cout << *valpointer << endl;
	}

// Reference - alias to variable (does NOT copy content)

	for (int k=0; k<length; k++) {
		int &valref = values[k];
		cout << valref << endl;
		valref += 12;	// Will change the value 
	}

// Confirming values have been changed

	for (int k=0; k<length; k++) {
		cout << values[k] << endl;
	}

}
