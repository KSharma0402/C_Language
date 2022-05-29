//2.11 Conditional Expressions
#include <stdio.h>

int main(void)
{
	//The basic syntax for a conditional expression is:

	/*
	var = (conditional expression) ? (value if true) : (value if false);
	*/

	//Example:
	int a = 1;
	a = (a > 0) ? (5) : (1.0);

	/* Notice that in the example above that the expression itself has
	a type of float because one of the values is a float. This value is
	then modified to fit the variable on the left. */
	printf("The value of variable 'a' is: %d\n", a);

	//Conditional expresssions can also be placed in print functions.
}
