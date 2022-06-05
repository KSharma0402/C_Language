//2.2: Data types and sizes
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	//Data types in C include:
	short int a; //16 bits long (range of 0-255)
	int b; //16 or 32 bits long
	long int c; //At least 32 bits long

	//int is optional for variables 'a' and 'c'

	//The following table will print the ranges of the types.

  printf("Number of bits in char: %d\n" , CHAR_BIT);
	printf("Maximum value of char: %d\n", CHAR_MAX);
	printf("Minimum value of char: %d\n", CHAR_MIN);

	printf("\nMaximum value of an int: %d\n", INT_MAX);
	printf("Minimum value of an int: %d\n", INT_MIN);

	//A bigger list can be seen in page 213 of the K&R book.

  return 0;
}