#include <stdio.h>
#include <strings.h>

int main(int argc, char ** argv) {
	int k;
	for (k=0; k<argc; k++) {
		printf("We said %s\n",argv[k]);
	}
}
