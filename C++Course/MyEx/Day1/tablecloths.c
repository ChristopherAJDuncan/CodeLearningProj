#include <stdio.h>


float clothWeight(float length, float width, float *total){
	/*length and width are of the table, and in mm */ 
	float density = 180.; /* grams per metre^2 */
	float overlap = 10.; /* cm per side */
	
	/* Convert to cm */
	length /= 10.;
	width /= 10.;
	
	float totalLength = length + 2.*overlap;
	float totalWidth = width + 2*overlap;

	/* Convert to metres */
	totalLength /= 100.;
	totalWidth /= 100.;

	float area = totalLength*totalWidth;

	float weight = area*density;
	
	/*Add to total*/
	*total += weight;
	
	return weight;
}

int main(){
	float totalWeight =  0.0;

	
	printf("Table 1 has cloth weight %10.2f, in grams\n", clothWeight(2000., 1200., &totalWeight));
	printf("Table 2 has cloth weight %10.2f, in grams\n", clothWeight(1300., 1300., &totalWeight));
	printf("Total weight is %10.2f, in grams\n", totalWeight);
}