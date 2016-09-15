#include <stdio.h>

void inflate(int *table,int lenny) {
	for (int i=0;i<lenny;i++) {
		(*table++)++;
	}
}

int main() {

	// Array in C

	int counter = 10;
	int people[counter];
	int k;	

	int total = 0;

	for (k=0; k<counter; k++) {
		people[k] = 10 + k;
	}

	inflate(people,counter);

	for (k=0; k<counter; k++) {
		printf("We have %d\n",people[k]);
		total += people[k];
		}

	printf("Grand total is %d\n",total);



	}
