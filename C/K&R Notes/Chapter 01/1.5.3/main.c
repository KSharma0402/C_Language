//1.5.3: Line counting

#include <stdio.h>

//This is a program that counts the number of newlines in a text file.
int main(void)
{
	int nlc = 0;
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nlc;
		}
	}
	
	printf("%d\n" , nlc);

	return 0;
}