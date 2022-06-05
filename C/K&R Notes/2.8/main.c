//2.8: Increment and Decrement Operators
#include <stdio.h>

/* Delete all chars 'c' from string 's' */
void squeeze(char s[], int c);

int main(void)
{
	int n = 1;
	//incrementing operator:
	n++;

	//decrementing operator:
	n--;

	//postfix:
	int x = n++; //Will equal n. Does not store changed value.
	n--; //reset to 1

	//prefix:
	x = ++n; //Will equal n+1. DOES store a changed value.

	/* (i+j)++ //This is illegal. */

	/* Sometimes, it is important to know the difference between the two.
	Look at the squeeze function below. */


	return 0;
}

void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i]; //Equivalent to s[j] = s[i]; j++;

	s[j] = '\0';
}