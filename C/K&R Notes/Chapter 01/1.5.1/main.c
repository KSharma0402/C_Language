#include <stdio.h>

int main(void)
{
	/* This is a code using the getchar() function that just prints what
	has been put in. */

	char c;
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}

	/*There are a few main components to the loop above:
	
	1.	The getchar() function can read only one input at a time.
		That is why we have a while loop in place so that a string of
		character inputs can be read until the end of file is
		encountered.

	2.	The putchar() function doesn't print a newline after being called
		just like the print function. It just prints whatever the value of
		the variable 'c' is.

	3.	The EOF is an integer defined in the stdio library in C.
		It has a value of -1. Whenver an input stream ends, the "value" of
		that non-existing character is -1.

	4.	The book says to use int as the data type for the 'c' variable
		because of the extended range of input types the 'int' data type
		is guaranteed to hold. Using 'char' might work, but it is more
		likely for the program to run into issues.
	*/

	//Another way that this program can be implemented is as follows:
  
	char l;
	while((l = getchar()) != EOF) /* Functions can be placed inside
	conditional statements of loops. Also the not equals operator has
	precedence over the equals operator, so you need parentheses. */
	{
		putchar(c);
	}

	return 0;
}