#include <stdio.h>

//This program removes extra spaces and tabs in a text file.
int main(void)
{
	int c;

	short int charWasSpace = 0;

	while ((c = getchar()) != EOF)
	{
		if (!charWasSpace)
			putchar(c);
		
		charWasSpace = ((c == ' ') || (c == '\t')) ? (1) : (0);
	}

	return 0;
}
