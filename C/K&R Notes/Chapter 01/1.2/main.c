#include <stdio.h>

int main(void)
{
	//Some of the data types that exist in C include:
	int a;
	float b;
	char c;
	short d;
	long e;
	double f;

	/* When printing floating point or int values, it is possible to
	specify at how many places we need to print before or after the
	decimal place. */

	a = 1253643;
	b = 214151.35;
	printf("%d\n", a); //Without lenght restriction
	printf("%5d\n" , a); //With length restriction

	printf("%f\n" , b); //With several decimal places
	printf("%.2f\n" , b); //With only two decimal places

	//Notice that the value is rounded instead of being truncated.

	/*
	Other format specifiers also include:
	- %o for octal
	- %x for hex
	- %c for character
	- %s for char string
	- %% prints the '%' sign itself
	*/

	return 0;
}
