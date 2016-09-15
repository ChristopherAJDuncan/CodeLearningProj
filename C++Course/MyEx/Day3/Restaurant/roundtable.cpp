#include "roundtable.h"
#include <string.h>

RoundTable::RoundTable(float setdiameter, char * setstaff){diameter = setdiameter; strncpy(staff, setstaff, 10);}
float RoundTable::getClothArea(){

	float totaldiameter = diameter/10.;
	totaldiameter += 2.*CLOTHOVERLAP;
	totaldiameter /= 100.;

	return PI*(totaldiameter/2.)*(totaldiameter/2.);
}
float RoundTable::getCircumference(){
	return PI*diameter;
}

