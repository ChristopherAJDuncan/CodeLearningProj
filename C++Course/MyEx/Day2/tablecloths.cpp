#include <stdio.h>
#include <string.h>

#define CLOTHDENSITY (180.)
#define CLOTHOVERLAP (10.)
#define PI (3.145)
#define FRONTLENGTH (850.) //in mm

class Table{
	public:
		float getClothWeight();
		int getNumberOfSeats();
		virtual float getClothArea() {};
		virtual float getCircumference() {};
		char staff[10];
	};

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

class RoundTable : public Table {
	public:
		RoundTable(float, char*);
		float getClothWeight();
		float getClothArea();
		float getCircumference();
	private:
		float diameter;
	};

float Table::getClothWeight(){	
	float area = getClothArea();
	float weight = area*CLOTHDENSITY;
	return weight;
}
int Table::getNumberOfSeats(){
	return (int) getCircumference()/FRONTLENGTH;
	}

SquareTable::SquareTable(float setlength, float setwidth, char * setstaff){ length = setlength; width = setwidth; strncpy(staff, setstaff, 10);}
SquareTable::SquareTable(float setlength, char * setstaff){ length = setlength; width = setlength; strncpy(staff, setstaff, 10);}
float SquareTable::getClothArea(){ 
	/* Convert to cm */
	float totalLength = length/10.;
	float totalWidth = width/10.;
	
	totalLength += 2.*CLOTHOVERLAP;
	totalWidth += 2*CLOTHOVERLAP;

	/* Convert to metres */
	totalLength /= 100.;
	totalWidth /= 100.;

	return totalLength*totalWidth;}
float SquareTable::getCircumference(){
	return 2.*(length+width);
	}

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