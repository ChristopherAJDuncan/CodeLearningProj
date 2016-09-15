#include <stdio.h>

void increase(int number) {	// "number" is local copy 
	number++;
	printf("Number is %d\n",number);
}	
void boost(int *number) {	// "number" is in effect an alias
	(*number)++;
	printf("Number is %d\n",*number);
}	


int main() {


	int people = 10;
	printf("People is %d\n",people);

	increase(people);
	printf("People is %d\n",people);

	boost(&people);
	printf("People is %d\n",people);

}
