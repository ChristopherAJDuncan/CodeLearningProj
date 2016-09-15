#include "table.h"

#ifndef SQUARETABLE
class SquareTable : public Table {
	public:
		SquareTable(float, float, char*); /*Constructor interface*/
		SquareTable(float, char*);
		float getClothWeight();
		float getClothArea();
		float getCircumference();	
	private:
		float length;
		float width;
};
#define SQUARETABLE
#endif
