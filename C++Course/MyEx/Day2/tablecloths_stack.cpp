#include <stdio.h>

class Table {
	public:
		Table(float, float); /*Constructor interface*/
		float getClothWeight();
		
	private:
		float clothDensity;
		float clothOverlap;
		float length;
		float width;
};

Table::Table(float setlength, float setwidth){ length = setlength; width = setwidth; clothDensity = 180.; clothOverlap = 10.;}
float Table::getClothWeight(){
	/* Convert to cm */
	length /= 10.;
	width /= 10.;
	
	float totalLength = length + 2.*clothOverlap;
	float totalWidth = width + 2*clothOverlap;

	/* Convert to metres */
	totalLength /= 100.;
	totalWidth /= 100.;

	float area = totalLength*totalWidth;

	float weight = area*clothDensity;
	
	return weight;
}

int main(){
	float totalWeight =  0.0;

	Table table1(2000.,1200.);
	Table table2(1300., 1300.);
	
	printf("Table 1 has cloth weight %10.2f, in grams\n", table1.getClothWeight());
	printf("Table 2 has cloth weight %10.2f, in grams\n", table2.getClothWeight());
}
