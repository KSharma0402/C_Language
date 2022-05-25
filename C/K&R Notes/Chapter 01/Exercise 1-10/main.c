#include <stdio.h>

/*
This program replaces each tab by '\t', each backslash by '\\', and
each backspace by '\b'

*/
int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}

		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}

		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}

	return 0;
}
