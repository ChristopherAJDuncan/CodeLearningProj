#include <stdio.h>

#include "nighttime.h"

int grandTotal = 0;

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

