#include <stdio.h>

int main(void)
{
	/* "Pointers have been lumped with the goto statements as a marvelous way to
	create impossible-to-understand program." - The K&R book */

	void* vptr; //This is a generic pointer.

	/* A pointer is a group of cells that can hold an address. If 'c' is a char and
	cptr is a pointer, then the situation could be represented as:

	[|||||||  .....  |||||||]		(This is a (poorly typed) figure of a memory array)
	  cptr -----------> c     
	
	the 'cptr' variable points to 'c'.
	*/

	/* The '*' operator is the "indirection" or the "dereferencing" operator. */
	char c = 'A';
	char* cptr = &c; //declaration of a pointer

	printf("%d\n", *cptr ); //dereferencing a pointer

	/* The similarity in the syntax for declaration and dereferencing is a source
	of confusion for a lot of beginner programmers. */

	//A pointer to void can hold any type of pointer, but can't be dereferenced itself.
	//We'll be talking more about pointers to void in the future.

	return 0;
}
