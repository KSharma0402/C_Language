#include "memory.h"
#include <stdio.h>

/* We're going to be making a storage allocators similar to malloc() and free().
We are given a large array called allocbuf[] that we need to give out chunks of
based on need.

There will be two functions:
	- alloc(n): return a pointer to n consecutive char positions
	- afree(p): release the storage acquired so it can be used later

Here's a figure representing how the alloc() function affects allocbuf[]:

allocbuf before call to alloc():
	[----------------------|_________________________]
	<----memory in use----> <-------free space------->

allocbuf after call to alloc():
	[----------------------------|___________________]
	<-------memory in use-------> <----free space---->
*/

#define ALLOCSIZE 10000	//Total size available
static char allocbuf[ALLOCSIZE]; //Array with the available size
static char *allocp = allocbuf; //Next free position
//^ the above variables are static because they are private to this file.


char *alloc(int n) //return a pointer to n characters
{
	if (allocbuf + ALLOCSIZE - allocp >= n) //If there is enough space
	{
		allocp += n; //Free the storage
		return allocp - n; //Return old pointer
	}

	else //Not enough room
		return 0; //Non-valid value for a pointer
}

void afree(char *p) //free storage pointed to by p
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}