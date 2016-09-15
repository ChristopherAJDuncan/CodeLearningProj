#include <stdio.h>


int main(){
	int nPass;
	int nTrain = 0;
	int passPerTrain = 500;
	int remainingPass;
	
	printf("Please enter the number of passengers: ");
	scanf("%d", &nPass);
	remainingPass = nPass;

	printf("Number of passenger is %d \n", nPass);
	
	while (remainingPass > 0){
		printf("%d people, train takes %d \n", remainingPass, passPerTrain);
		remainingPass -= passPerTrain;
		nTrain++;
	}	
	printf("All passengers gone, %d trains used \n", nTrain);
}
