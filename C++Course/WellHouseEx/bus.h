#ifndef BUS

#include "transport.h"

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

#define BUS
#endif
