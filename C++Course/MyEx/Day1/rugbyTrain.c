#include <stdio.h>

#ifndef PASSENGERS
#define PASSENGERS (200)
#endif

int main(){
	int nPass = PASSENGERS;
	int nTrain = 0;
	int passPerTrain = 500;
	int remainingPass = nPass;
	
	while (remainingPass > 0){
		printf("%d people, train takes %d \n", remainingPass, passPerTrain);
		remainingPass -= passPerTrain;
		nTrain++;
	}	
	printf("All passengers gone, %d trains used \n", nTrain);
}
