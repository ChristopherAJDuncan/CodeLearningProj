#ifndef TRAIN

#include "transport.h"

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

#define TRAIN
#endif
