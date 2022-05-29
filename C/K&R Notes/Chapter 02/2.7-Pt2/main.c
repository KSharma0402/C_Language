//Type conversions: promotion rules
#include <stdio.h>

int newfunc(short int x, float y)
{
	return (int)y + x;
}

int main(void)
{

	/* Promotion rules are more complicated with unsigned ints and longs
	- Consider -1L, which is a 16 bit number, and 1U, which is an 8-bit number.
	When comparing these two, the 1U will be promoted to a long.
	So now we have a positive 16 bit number being compared to a negative
	16 bit number, and this makes perfect sense.

	- However, if you have -1L being compared to 1UL, -1L is promoted to be unsigned.
	The MSB of -1UL will not be acting as a negative indicator, but rather as a very
	big number. So, -1UL is bigger than 1UL.
	*/

	//Example:
	if (1UL > -1L)
		printf("The negative long is bigger.\n");
	else
		printf("The unsigned long is bigger.\n");


	/* A few things to note about type conversions:
	- Generally, if the operator is an arithmetic operator, the "lower" type will be converted
	  to the "higher" type.

	- This does not apply for the assignment operator. Assignment goes from right to left.
	  So, the value on the right of '=' should fit into the type on the left. This can lead
	  to a loss of information since the value on the right will have to be modified.
	*/
	//Example:
	int a = 325053;
	short int b;
	b = a;

	printf("\nThe value of 'a' is: %d\n", a);
	printf("The value of 'b' is: %d\n", b);

	/* Another thing to note about functions is that their default types are int and float
	   if the types have not been specified in the function definition. */
	
	//Type casting: "forcing" a variable to be a certain type.
	//Without type casting:
	int c = 5;
	int d = 9;
	float e = a/b;
	printf("\nValue of 5 (int) divided by 9 (int) is: %.2f\n", e);
	
	//With type casting:
	c = (float)a/(float)b;
	printf("Value of 'c' using type casting: %.2f\n", e);
	//Note that the value of 'n' itself is not changed, but only when passing it.
	
	//Cast is also a unary operator, and has (one of) the highest precedence(s).

	return 0;
}
