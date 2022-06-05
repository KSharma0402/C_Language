//4.5: Header Files

/* We will now divide the program in 4.3 into several sources files. Try skimming
through the files in this directory.

A header file is used to put down *anything* that will be shared between two files.

Usually, in a more complex program, you would need several header files, and that
is usually a tradeoff for the sake of more organization.
*/

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

int main(void)
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
			case NUMBER:
				push(atof(s));
				break;
			
			case '+':
				push(pop() + pop());
				break;
			
			case '*':
				push(pop() * pop());
				break;
			
			case '-':
				op2 = pop();
				push(pop() - op2); //Can't do (pop() - pop()); Needs to be in order
				break;
			
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("Error: zero divisor\n");
				break;

			case '\n':
				printf("\t%.8g\n", pop()); //%g gives results in either float or scientific notation
				break;
			
			default:
				printf("Error: unknown command %s\n", s);
				break;
		}
	}

	return 0;
}
