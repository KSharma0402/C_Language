//4.7: Register Variables

#include <stdio.h>

/*A register variable tells the compiler that a certain variable is to be placed
in a machine register. This should be only used for variables that are heavily
used. This allows for a more efficient program. */

void f(register unsigned m, register long n)
//Register declarations can only be applied to parameters...
{
	register int i; //or to the automatic variables in a function (can't be static).
	//And so on
}

/* Some other things about register variables:
- You can't access their address (probably because of security reasons)
- Only a few variables can be registers. This largely depends on the machine.
- It is up to the compiler to ignore the 'register' keyword in a C program.
*/

int main(void)
{

	register int x = 10;
	register int y;

	return 0;
}
