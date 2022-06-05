#include <stdio.h>
#include <stdlib.h>

//Count characters in the input
int main(void)
{
	long nc = 0;
	while(getchar() != EOF) /* getchar() can be placed inside the while
	loop without a variable because getchar() just reads the input.*/
	{
		++nc;
		/*There is a difference between nc++ and ++nc.*/
	}

	printf("%ld\n", ++nc);
	//Try replacing nc++ and ++nc above to find out what happens.
	//There is a delay in the increment of the variable 'nc'

	//Another way this loop can be implemented as follows:
	for (int nc = 0; getchar() != EOF; ++nc);
	/* A for loop requires a body, but the semicolon is put in to function
	as a null statment. */

	printf("%ld\n" , nc);
	return 0;
}
