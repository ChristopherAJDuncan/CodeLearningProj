#include <iostream>
using namespace std;

class Train {
	public:
		Train(int, int);
		Train(int, int, int *);
		int getCapacity();
		bool onDay(int);
	private:
		int length;
		int seats;
		int daysOperate[7];
	};


Train::Train(int cars, int seatsEach) 
		{ length = cars; seats = seatsEach; 
		for (int i=0; i<7; i++) daysOperate[i] = 1;
		}
Train::Train(int cars, int seatsEach, int *days) 
		{ length = cars; seats = seatsEach; 
		for (int i=0; i<7; i++) daysOperate[i] = 0;
		while (int day = *(days++)) daysOperate[day-1] = 1;
		}
int Train::getCapacity() { return (int)(length * seats * 1.4); }
bool Train::onDay(int which) { return (daysOperate[which-1] == 1); }

int main () {
	cout << "This code is running\n";

	Train *commute[2];

	int runs[] = {1,2,3,4,5,0};

	commute[0] = new Train(2,75,runs);
	commute[1] = new Train(5,79);

	for (int k=0; k<2; k++) {
		int e = commute[k]->getCapacity();
		cout << "Capacity of " << e << endl;
		if (commute[k]->onDay(7)) cout << "Runs Sundays !" << endl;
	}
}
