/* If you pass a variable into a function in C, you copy the contents into the function
so thst any changes made internally in the function are not reflected in the main code copy.
However, if you pass in the address of the variable and work at the same address inside and
outside the function, any changes you make to the variable's contents within the function will
#%% changing a parameter's value within a function
be reflected in the calling code too. */

/* changing a parameter's value within a function */

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

	int *wherepeople;
	int people;

	printf("How many people yagot? ");
	scanf("%d",&people);
	printf("People is %d\n",people);

	increase(people);
	printf("People is %d\n",people);

	boost(&people);
	printf("People is %d\n",people);

	wherepeople = &people;
	boost(wherepeople);
	printf("People is %d\n",people);

}

/* Sample output 

WomanWithCat:harwell grahamellis$ ./astamp 
How many people yagot? 5
People is 5
Number is 6
People is 5
Number is 6
People is 6
Number is 7
People is 7
WomanWithCat:harwell grahamellis$

*/
