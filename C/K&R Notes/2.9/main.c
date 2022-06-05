//2.9: Bitwise operators

#include <stdio.h>

int power(int x, int n)
{
	int y = 1;

	if (n >= 1)
		for (int i = 0; i < n; i++)
			y = x * y;

	return y;
}

//Might need this function since we're dealing with binary numbers
int decToBin(int x)
{
	int y = 0;

	int n = 0;
	while (x > 0)
	{
		y = y + (x % 2)*power(10, n);
		x /= 2;
		n++; //No way I'm using the prefix '++' operator
	}

	return y;
}

int main(void)
{
	/* Let's talk about bitwise operators. These only work for int data types.
	
	Consider the number 42, which is 101010 in binary, and the number 21,
	which is 10101 in binary (or 010101, if you want to be more clear).

	if we define some int n = 42 & 21, the bitwise & operator would compare the binary
	digits of the two numbers bit by bit. If both of the digits are '1', then n would
	equal to '1' in that digit in binary form. Otherwise, it would equal 0.
	
	The variable 'n' would then be shown as a base-10 int.
	*/
	unsigned int n;
	n = 42 & 21;
	/* Should be equal to zero. None of the digits match.   101010
														  & 010101
														  = 000000
	*/
	
	printf("The value of 'n' is (after AND): %d\n", n);


	/* The bitwise or '|' operator works as you would expect. It would assign a '1' to
	that digit if either were to be '1'. */

	n = 42 | 21; //Should be equal to 111111 (63)

	printf("The value of 'n' is (after OR): %d\n", n);


	//This is the bitwise XOR '^' operator and it also works as you would expect.
	n = 43 ^ 21; //Should be equal to 111110 (62)
	printf("The value of 'n' is (after XOR): %d\n", n);



	/* This is the bitwise shift left '<<' operator. It shifts the binary digits of the number
	to the left based on the number on the right */

	unsigned int m = 2;
	n = 6; //Equal to 110
	printf("The current value of n is: %d\n", n);
	
	int v = n << m; //Assigns v to be equal to digits of n shifted left by m places.
	printf("The value of variable v is (left shifted): %d\n", v);
	//Basically, n << m is equivalent to n*pow(2, m)


	/* This is the bitwise shift right '>>' operator. It shifts the binary digits to the right. */
	
	v = -2 >> 1; //Should be equal to 11 (3)
	printf("The value of variable v is (right shifted): %d\n", v);
	//n >> m is equivalent to n/pow(2, m). This would truncate the decimal place.


	/* This is the complement operator. It will basically flip the bits (and make
	   a negative number) */
	v = ~6;
	printf("The value of variable v (ones complemented) is: %d\n", v);

	v = ~6 + 1;
	printf("The value of variable v (two's complemented) is: %d\n", v);


	int cin = 243;
	char cout = cin << 21;

	return 0;
}