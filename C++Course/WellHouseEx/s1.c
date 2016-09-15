/* Strings in C are pointers to arrays of characters, null (\0) terminated.
Which means that if you compare them with the == operator, you're going to be 
comparing addresses, and not whether the strings contain the same text. And even 
if you put a "*" in front of the variable you're comparing, all you'll do is compare
the first character.

Solution is to use standard functions such as strcmp and strcpy - string compare and 
string copy.   Both of these are regarded as dangerous as they can run off the end of 
stings that aren't properly null terminated, so you also have strncmp and strncpy 
which are better regarded, and have an extra parameter which is the maximum number of
characters to compare / copy.
#%% String compare and copy

Similarly, fgets to read in a string (use stdin for the keyboard) with a maximum length
is much safer that gets which can easiiy be overrun by a too-long input!  */


#include <stdio.h>
#include <strings.h>

int main() {
	char saying[81];
	char host[81];
	int i;

	for (i=0; i<2; i++) {
		printf("Whats yaname: ");
		fgets(saying,80,stdin);

		/* add a "null" in the last place to replace the new line that
		fgets adds (well - the user adds to indicate his response is complete! ) */

		saying[strlen(saying)-1] = '\0';
	
		printf("You said %s to me\n",saying);
	
		if (! strncmp(saying,"Graham",80)) {
			printf("It's your party\n");
		} else {
			printf("Don't forget the booze\n");
		}
		if (i == 0) strncpy(host,saying,80);
	}
	printf("Party %s and %s\n",host,saying);
}

/* Sample Output

WomanWithCat:harwell grahamellis$ ./s1
Whats yaname: Graham
You said Graham to me
It's your party
Whats yaname: Robert
You said Robert to me
Don't forget the booze
Party Graham and Robert
WomanWithCat:harwell grahamellis$

*/
