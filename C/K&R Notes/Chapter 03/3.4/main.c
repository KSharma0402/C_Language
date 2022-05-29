//3.4: Switch statement

#include <stdio.h>

int main(void)
{
	//Over here we'll be using switch statements for a program covered in chapter 1.

	int c, i, nwhite, nother, ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9': 
				ndigit[c - '0']++; //index zero corresponds to 0, index one corresponds to 1, and on...
				break;
			case ' ': case '\n': case '\t':
				nwhite++;
				break;
			default:
				nother++;
				break;
		}
	}

	//Execution always falls through a switch statement without inclusion of a break or return.

	

	printf("Hello World!\n");
	return 0;
}
