#include <stdio.h>

int main(void)
{
	/* This is the do-while loop. It runs a statement at least once, then
	checks the conditional statement. */

	int x = 49;
	do
		x--;
	while (x % 7 != 0);

	printf("The value of 'x' is: %d\n", x);

	return 0;
}
