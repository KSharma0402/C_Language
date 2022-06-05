//2.10: Assignment operators

#include <stdio.h>

int main(void)
{
	/* Almost all regular operators have a corresponding assignment operator.
	These include (but not limited to):
		+=
		-=
		*=
		/=
		%=

		&=
		|=
		^=
		>>=
		<<=
	
	These operators essentially update the value of the variable on the left of
	the operator.
	*/

	//Example:
	int x = 1;
	int y = 2;

	x *= y+1;

	//The expression above is equivalent to:
	x = x + (y + 1);
	//Notice that y + 1 is done first.

	/* Syntax for some operator O:

	x O= (exp1);
	is equivalent to:

	x = x O (exp1);
	*/
}
