#include <stdio.h>

/* Variable outside functions - an "extern" / global variable */
/* it's a yukky way to pass data about though! */

int grandTotal = 0;

void dream() {
	int totalSeats = 3;		/* variable names local */
	printf("I dreamed that Billy left me space in bed\n");
	printf("There was room for %d of us\n",totalSeats);
	grandTotal += totalSeats;
	}

int main() {
	int numberCarriages = 5;	/* length in carriages */
	int seatsPerCarriage = 82;	// excluding driver!
			/*  // usually works in modern C ;-) */

	int totalSeats;

	totalSeats = numberCarriages * seatsPerCarriage;
	grandTotal = grandTotal + totalSeats;
	printf("Greetings to Oxfordshire\n");
	printf("Greetings to Oxfordshire\n");
	printf("Greetings to Oxfordshire\n");
	dream();
	dream();
	printf("Greetings to Oxfordshire\n");
	printf("The train will carry %d people\n",totalSeats);
	printf("Grand Total %d people\n",grandTotal);
}

