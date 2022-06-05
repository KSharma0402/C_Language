//We'll be talking about constants today.

//This is an int constant
#define INT1 1234

//This is a long int constant
#define INT2 123456789L //Notice the terminal 'L'

//This is an unsigned int constant
#define INT3 12345U
//'UL' can be placed terminally to make unsigned long.

//Floating points contain a decimal
#define FLOAT1 1.23
//Or an exponent
#define FLOAT2 125e-2 //Don't know why 'e' is used
#define FLOAT3 13f //Is a float with 'f' as a suffix


//Octal numbers have a leading 0 (zero)
#define OCTAL 037 //31 in octal

//Hexadecimal numbers have a lower or uppercase 'X' followed by a leading zero
#define HEXNUM 0x1F

#define ALLNUM 0XFUL
//Is an unsigned long constant with value of 15.


/*Characters have a certain ASCII integer value associated with
them. It is possible to have an "arbitrary byte-sized bit
pattern" for these characters. In other words, ASCII characters
can also be written in octal and hexadecimal form.*/

char Aoct  = '\101'; //Character 'A' in octal
char Ahex = '\x41';

char Bhex = '\x42'; //Character 'B' in hex

/*Notice the slashes in the front.*/

#include <stdio.h>

int main(void)
{
	printf("%c\n", Aoct); //Printing the values in the vars
	printf("%c\n", Ahex);
	printf("%c\n", Bhex);
	return 0;
}