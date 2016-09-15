#include <iostream>
using namespace std;

class Train {
	public:
		Train(int, int);
		int getCapacity();
	private:
		int length;
		int seats;
	};


Train::Train(int cars, int seatsEach) { length = cars; seats = seatsEach; }
int Train::getCapacity() { return (int)(length * seats * 1.4); }

int main () {
	cout << "This code is running\n";

	Train *commute[2];

	commute[0] = new Train(2,75);
	commute[1] = new Train(5,79);

	for (int k=0; k<2; k++) {
		int e = commute[k]->getCapacity();
		cout << "Capacity of " << e << endl;
	}
}
