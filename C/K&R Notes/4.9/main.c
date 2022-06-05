//4.9: Initialization
#include <stdio.h>

/* Some rules about initialization of variables:
- Static and external variables ALWAYS have a value of 0 upon initialization
- Automatic variables have an undefined value. It can be random/garbage. */

int main(void)
{
	int newarr[10] = {1, 5, 10}; //The rest of the values in the array will be 0
	printf("%d\n", *(newarr + 4));

	char pattern[] = "ould";
	/* The line above is equivalent to: {'o', 'u', 'l', 'd', '\0'}.
	It has a length of five. */

	return 0;
}
