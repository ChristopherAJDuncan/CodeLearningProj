#include "table.h"

float Table::getClothWeight(){	
	float area = getClothArea();
	float weight = area*CLOTHDENSITY;
	return weight;
}
int Table::getNumberOfSeats(){
	return (int) getCircumference()/FRONTLENGTH;
}
