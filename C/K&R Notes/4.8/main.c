//4.8: Block Structure

#include <stdio.h>

/* The block structure in C uses curly braces. Any variables INSIDE the braces will
only exist between the two braces. */

int a = 10;

int main(void)
{
	int a = 10; //New variable with the same name as the global variable 'a'
	printf("The value of 'a' is: %d\n", a);

	{int a = 10;}
	{int a = 12;}
	//The variables above exist in their own world.

	/* One thing to note, however, is that using variables that are different but have
	the same name is generally a bad programming practice and should be avoided. */

	return 0;
}
