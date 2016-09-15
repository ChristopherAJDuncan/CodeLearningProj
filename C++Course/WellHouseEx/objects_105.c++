#include <iostream>
using namespace std;

class Train {
	public:
		Train(int, int);
		Train(int, int, int *);
		int getCapacity(float);
		bool onDay(int);
	private:
		void setUp(int, int);
		int length;
		int seats;
		int daysOperate[7];
	};

void Train::setUp(int cars, int seatsEach) { length = cars; seats = seatsEach;}

Train::Train(int cars, int seatsEach) 
		{ setUp(cars, seatsEach);
		for (int i=0; i<7; i++) daysOperate[i] = 1;
		}
Train::Train(int cars, int seatsEach, int *days) 
		{ setUp(cars, seatsEach);
		for (int i=0; i<7; i++) daysOperate[i] = 0;
		while (int day = *(days++)) daysOperate[day-1] = 1;
		}
int Train::getCapacity(float over=1.4) { return (int)(length * seats * over); }
bool Train::onDay(int which) { return (daysOperate[which-1] == 1); }

int main () {
	cout << "This code is running\n";

	Train *commute[2];

	int runs[] = {1,2,3,4,5,0};

	commute[0] = new Train(2,75,runs);
	commute[1] = new Train(3,79);

	for (int k=0; k<2; k++) {
		int e = commute[k]->getCapacity();
		cout << "Regular capacity of " << e << endl;
		e = commute[k]->getCapacity(1.6);
		cout << "Peak capacity of " << e << endl;
		if (commute[k]->onDay(7)) cout << "Runs Sundays !" << endl;
	}
}
