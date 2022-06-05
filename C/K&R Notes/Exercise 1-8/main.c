#include <stdio.h>

//This is a program that counts the number of blanks, tabs, and newlines.
int main(void)
{
	int c;
	int nl, nb, nt;

	nl = nb = nt = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			nl++;
		else if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
	}

	printf("The number of newlines are: %d\n", nl);
	printf("The number of blanks are: %d\n", nb);
	printf("The number of tabs are: %d\n", nt);

	return 0;
}
