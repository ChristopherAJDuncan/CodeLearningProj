#include <iostream>
using namespace std;

int main() {

	int value ;

	cout << "Please give me an integer: ";
	cin >> value;
	cout << "Let's shift that" << endl;

	value = value << 2;

	cout << value << endl;
}
