#include <stdio.h>

/* PASSENGERS may be defines at compile time with 
#%% C and C++ preprocessor examples
	-DPASSENGERS=66
or similar.  If not defined, set it to 35 */

#ifndef PASSENGERS
#define PASSENGERS (35)
#endif

/* Next line is a demo - 'just to show we can' */
#define PUDDLE printf

int main() {

	int people = PASSENGERS;
	int queue;

	if (people < 7) {
		printf("Get 'em taxies\n");
	} else if (people < 25)  {
		PUDDLE("Bus looks realistic\n");
	} else {
		printf("Use the train\n");
	}

#ifdef LINUX
	printf ("What lovely weather\n");
#endif

#ifdef OSX
#include "about.inc"
#endif

	queue = people;
	while (queue > 0) {
		printf("Have a seat for no. %d\n", --queue);
	}

	for (queue=0; queue<people; queue++) {
		printf("Get fare from no. %d\n", queue);
	}
}
