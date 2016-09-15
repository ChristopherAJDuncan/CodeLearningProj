#include <stdio.h>

// int dream(int) ;
#include "nighttime.h"

int dream(int number) {
        int totalSeats ;                /* variable names local */
        totalSeats = 3 + number;
        printf("I dreamed that Billy left me space in bed\n");
        printf("There was room for %d of us\n",totalSeats);
        return totalSeats;
        }
