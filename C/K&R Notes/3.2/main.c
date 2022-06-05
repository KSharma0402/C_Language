//3.2: If-Else

#include <stdio.h>

int main(void)
{
	//Some quirks about if-else:

	int x = 2;
	int y;

	if (x) //If non-zero, will evaluate to true.
		y = 12;
	else //Will evaluate if zero
		y = 13;

	if (x)
		if (x % 3 == 0)
			y = 5;
	else //This is a wrong statement
		y = 12;
		//This else branch will be nested.

	/* This is the proper way to type this: */

	if (x)
	{
		if (x % 3 == 0)
			y = 5;
	}
	else
		y = 12;
	
	//Generally, don't be lazy with nested if-else branches. Will be hard to debug.

	return 0;
}
