#include <stdio.h>

// Very unpleasant - overflows are not flagged up

int main() {
	short int a = 40000;
	short int b = 30000;
	short int c;
	c = a+b;
	printf("Value is %d\n",c);
}
