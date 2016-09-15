#include <stdio.h>

/*  Data types 
	unsigned long short int
	float double
	in formatting for the latter "%10.2f" - 10 chars, 2 after .
*/

/* I have 2 tables - 2000 x 1200 mm and 1300 x 1300 mm
The tablecloth overlaps 10 cm all round and weighs 180 gm m/2
How heavy are the table cloths?   */

int grandTotal = 0;

int dream(int number) {
	int totalSeats ;		/* variable names local */
	totalSeats = 3 + number;
	printf("I dreamed that Billy left me space in bed\n");
	printf("There was room for %d of us\n",totalSeats);
	return totalSeats;
	}

int main() {
	int numberCarriages = 5;	/* length in carriages */
	int seatsPerCarriage = 82;	// excluding driver!
			/*  // usually works in modern C ;-) */
	int totalSeats, grandTotal = 0;

	totalSeats = numberCarriages * seatsPerCarriage;
	printf("Greetings to Oxfordshire\n");
	printf("Greetings to Oxfordshire\n");
	printf("Greetings to Oxfordshire\n");
	grandTotal += dream(7);
	grandTotal += dream(8);
	printf("Greetings to Oxfordshire\n");
	printf("The train will carry %d people\n",totalSeats);
	printf("Grand Total %d people\n",grandTotal);
}

