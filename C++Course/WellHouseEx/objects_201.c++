#include <iostream>
using namespace std;

class Transport {
	public:
		virtual int getCapacity(float) {};
		bool onDay(int);
	protected:
		int daysOperate[7];
	};

class Train : public Transport {
	public:
		Train(int, int);
		Train(int, int, int *);
		int getCapacity(float);
	private:
		void setUp(int, int);
		int length;
		int seats;
	};

class Bus  : public Transport{
	public:
		Bus(int);
		Bus(int, int *);
		int getCapacity(float);
	private:
		void setUp(int, int);
		int length;
		int seats;
	};

bool Transport::onDay(int which) { return (daysOperate[which-1] == 1); }

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


void Bus::setUp(int cars, int seatsEach) { length = cars; seats = seatsEach;}
Bus::Bus(int seatsEach) 
		{ setUp(1, seatsEach);
		for (int i=0; i<7; i++) daysOperate[i] = 1;
		}
Bus::Bus(int seatsEach, int *days) 
		{ setUp(1, seatsEach);
		for (int i=0; i<7; i++) daysOperate[i] = 0;
		while (int day = *(days++)) daysOperate[day-1] = 1;
		}
int Bus::getCapacity(float over=1.4) { return seats; }

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
