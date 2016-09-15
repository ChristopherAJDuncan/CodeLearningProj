#include <stdio.h>
#include "myheaders.h"

void goRead(float array[], int lenny){
	/* Reads into array of length lenny a set of values */
	
	int i;
	for (i=0; i<lenny; i++){
		printf("\n Please enter rainfall number %d:", i);
		scanf("%f", array+i);
		//*(array+i) = 1.5*i - 0.5*i*i;
		
	}
}


float getLargest(float array[], int lenny, float *total){
	float maxi= array[0]; /* must be a better way of finding the maximum */
	
	int i;
	for (i=0; i<lenny; i++){
		if(*(array+i) > maxi){
			maxi = *(array+i);
		}
		*total += *(array+i);
	}
	
	return maxi;
}
