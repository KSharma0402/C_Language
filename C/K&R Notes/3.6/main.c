#include <stdio.h>
#include <string.h>

//reverse a string
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itoa(int n, char s[]);

int main(void)
{
	/* This is the do-while loop. It runs a statement at least once, then
	checks the conditional statement. */

	int x = 49;
	do
		x--;
	while (x % 7 != 0);

	printf("The value of 'x' is: %d\n", x);

	//Look at the itoa() function below as a demonstration of do-while.

	return 0;
}

//itoa: convert n to characters in s (write a number as a string)
void itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)		//record sign and check if it's negative
		n = -n;					//make n positive
	
	i = 0;
	do	//generate digits in reverse order
	{
		s[i] = n % 10 + '0';	//get next digit
		i++;
	} while ((n /= 10) > 0);	//delete it

	if (sign < 0)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';

	reverse(s);
}