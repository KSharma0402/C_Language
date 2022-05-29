//3.5: For and While Loops

#include <stdio.h>
#include <ctype.h> //Need this for checking types

//more general version of atoi
int atoi(char s[]);

//reverse a string
void reverse(char s[]);

int main(void)
{
	//It is possible to omit the three expressions in a for loop:
	for (;;) {break;} //Would go on forever without break
	//Expression in the middle is permanently true.

	/* Check out the update atoi function below. The standard library, however,
	has a more elaborate function strtol() to convert string to long ints. */

	/* The comma ',' is also an operator. Helps placing multiple expressions in
	various parts. Look at the reverse() function below as an example. */

	/* One important thing to note: the commas in functions AREN'T operators.
	And so they don't guarantee left to right evaluation. */

	return 0;
}

/* Rules for this version of array to int:
skip white space, if any.
get sign, if any.
get int part and convert it
*/
int atoi(char s[])
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++); //Skip white space

	sign = (s[i] == '-') ? -1: 1;
	if (s[i] == '+' || s[i] == '-') //Skip sign
		i++;
	
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

//reverse a string
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}