#include <iostream>
using namespace std;

#include "bus.h"
#include "train.h"

int main () {
	cout << "This code is running\n";

	Transport *commute[3];

	int runs[] = {1,2,3,4,5,0};

	commute[0] = new Train(2,75,runs);
	commute[1] = new Train(3,79);
	commute[2] = new Bus(88);

	for (int k=0; k<3; k++) {
		int e = commute[k]->getCapacity(1.4);
		cout << "Regular capacity of " << e << endl;
		e = commute[k]->getCapacity(1.6);
		cout << "Peak capacity of " << e << endl;
		if (commute[k]->onDay(7)) cout << "Runs Sundays !" << endl;
	}
}
