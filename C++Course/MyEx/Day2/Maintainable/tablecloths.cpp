#include <stdio.h>
#include <string.h>

#include "roundtable.h"
#include "squaretable.h"

int main(){
	float totalWeight =  0.0;

	Table *tables[5];
	tables[0] = new SquareTable(2000.,1200., "Phil");
	tables[1] = new SquareTable(1200., "Gill");
	tables[2] = new RoundTable(1700., "Gill");
	tables[3] = new RoundTable(1800., "Phil");
	tables[4] = new RoundTable(1900., "Bill");
	
	for (int k = 0; k<5; k++){
		printf("Table %d has cloth weight %.2f,grams. Number of seats is %d. Staff is %s\n", k+1, tables[k]->getClothWeight(), tables[k]->getNumberOfSeats(), tables[k]->staff);
	}
}
