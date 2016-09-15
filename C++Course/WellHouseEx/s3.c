#include <stdio.h>
#include <strings.h>

int main(int argc, char ** argv) {
	while (argc--) {
		while (**argv) {
			printf("a %c\n",*(*argv)++);
		}
		printf("We said %s\n",*argv++);
	}
}
