//2.6: Relational and Logical Operators
#include <stdio.h>

int main(void)
{
	/* Relational operators (listed on order):
		Unary !
		>, >=, <, <=
		==, !=
		&&
		||
	*/
	
	//All relational operators have lower precedence than arithmetic operators

	/* Some interesting facts about && and ||:
	- They are evaluated from left to right
	- The C program stops reading compound relations as soon as the
	  falsehood is definitely known
	*/
	
	//1 is true, 0 is false

	printf("Hello World!\n");
	return 0;
}
