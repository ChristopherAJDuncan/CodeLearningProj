#include "bus.h"

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
