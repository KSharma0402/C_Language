//2.7: Type conversions
#include <stdio.h>

//Sample program: atoi, converts string of digits to an int
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; '0' <= s[i] && s[i] <= '9'; i++) 
		n = 10 * n + (s[i] - '0');

	/* A few things to note about this function:
	- This is a BAD program
	- As soon as the loop detects a character that is NOT in the
	  range of '0' and '9', the loop terminates.
	- However, it is possible for this loop to walk off the char array and potentially
	  read a data that is in the range but was not in the original string.
	- But the chances of that happening are rare, so who cares?
	*/

	return n;
}

//lower: convert c to lower case; ASCII chars only
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A') + 'a';
	else
		return c;
}

/* The functions above are simpler versions of functions found in
the <ctype.h> library. */

/* signed/unsigned qualifiers should be used for portability if dealing with characters
out of the standard set. */

//True essentially means "not 0" in C

int main(void)
{
	char numstring[] = "24801";
	int numint = atoi(numstring);

	printf("This is a string: %s\n", numstring);
	printf("This is a number: %d\n", numint);

	return 0;
}
