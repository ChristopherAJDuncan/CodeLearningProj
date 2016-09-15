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

	Train * early = new Train(2,75);
	Train * commuter = new Train(5,79);

	int e = early->getCapacity();
	int c = commuter->getCapacity();

	cout << "Capacities of " << e << " and " << c << endl;
	}
