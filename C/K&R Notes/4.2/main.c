//4.2: Functions Returning Non-integers

#include <stdio.h>
#include <ctype.h>

// Let's make a function atof() that converts a string into a float

double atof(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++);	//Skip ANY white space

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;

	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}

	return sign * val / power;
}

int main(void)
{
	double sum, atof(char[]); /* The atof() function should be declared as
	a double function in main() in case it is in a different source file.
	
	If it is treated as a function that returns an int (for example) and is
	in the same source file as main.c, the compiler would throw an error, but
	not when it is in a different source file.
	
	This is an important safety measure.
	
	the (char[]) is also important. Its exclusion will result in parameter
	checking being "turned off."

	Also (cast) is important to avoid compiler warnings.
	*/

	return 0;
}
