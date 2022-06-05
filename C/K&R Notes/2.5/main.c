//2.5: Arithmetic operators

#include <stdio.h>

int main(void)
{
	/* The binary arithmetic operators are:
	+ or -
	* or / and the %	
	*/

	//int division truncates any fractional part

	/* Precedence is as follows:
		+ (unary)
		- (unary)
		*, /, %
		+, -
	*/

	int a = -10;
	printf("Current value of 'a': %d\n", a);

	a = +a; //Unary operator. Doesn't really do anything to the current value.
	printf("Value of 'a' after positive unary operator: %d\n", a);

	a = -a; //Negates the current value
	printf("Value of 'a' after negative unary operator: %d\n", a);

	return 0;
}
