#include "train.h"

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
