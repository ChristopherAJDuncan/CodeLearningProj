#ifndef TRANSPORT

class Transport {
	public:
		virtual int getCapacity(float) {};
		bool onDay(int);
	protected:
		int daysOperate[7];
	};

#define TRANSPORT
#endif
