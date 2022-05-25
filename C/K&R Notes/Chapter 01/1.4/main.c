#include <stdio.h>

/* In C, you also have symbolic constants instead of variables. The
values for constants cannot be updated. And they do not take any space
because the compiler just replaces instances of NUMBER with
the value it "stores" right on the code at compile time. */

#define NUMBER 65

int main(void)
{
	printf("%d\n" , NUMBER);
	return 0;
}