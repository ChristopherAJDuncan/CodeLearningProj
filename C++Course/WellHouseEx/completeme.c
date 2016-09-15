#include <stdio.h>

#include "myheaders.h"

#define DAYS 10


main () {

	float rainfall[DAYS];
	float wettest;
	float total;

	goRead(rainfall,DAYS);

	wettest = getLargest(rainfall,DAYS,&total);

	printf("Wettest %.2f and total %.2f\n",wettest,total);
}




