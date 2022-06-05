//4.6: Static Variables

#include <stdio.h>

/* Declaring a global variable to be static allows its scope to be ONLY in the
file which it is in. The purpose of doing this is to limit unintentional access
to the variable.

You can also declare functions to be static. This would do a similar thing. It
would limit the access to the function ONLY within the file which it is in.

Internal variables can be declared static as well. They behave just like
automatic variables. Their scope is only within the function they are. The
difference is that their value is not discarded after a call. It remains. */

static int newFunc();
static int newVar;

int aFunction(void)
{
	static int b = 0; //Only declared ONCE. Will be ignored upon further calls.
	b++;
	return b;
}

int anotherFunc()
{
	register int a;
}

int main(void)
{
	printf("The value of 'b' is: %d\n", aFunction());
	printf("The value of 'b' is: %d\n", aFunction());
	return 0;
}
