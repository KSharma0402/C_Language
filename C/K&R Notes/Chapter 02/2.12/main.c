//2.12: Precedence and order of Evaluation
#include <stdio.h>

/* Some bonus operator that are yet to be discussed:
	() function call operator
	[] array subscripting operator
	-> and . (are used to access struct members, will be covered soon)

	All operators above are the highest precedence (before unary)
*/

int f();
int g();

int main(void)
{
	/* A quirk about C (and most programming languages) is that the order
	of the operands of an operator are evaulated is not specified. For
	example: */

	int x = f() + g(); //May go from right to left or left to right.

	// The exceptions to this, however, are &&, ||, ?:, and ',' itself.

	/* This also means that a statement like:

		printf("%d %d\n", ++n, power(2, n))
	
	is wrong, since results might vary. */


	/* So here's the main takeaway: don't write code that has ambiguity in
	order of evaluation. */

	return 0;
}
