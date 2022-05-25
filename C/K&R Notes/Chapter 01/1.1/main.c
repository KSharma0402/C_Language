/* This will be first in the series of my notes for the C programming
language book by Ritchie and Kernighan. I think you should know basic
linux before starting this book. */

#include <stdio.h>

/* The line above is a header file that includes basic library functions
to run our C program. */

int main(void)
{
	printf("Hello World!\n");
	return 0;
}

/* The file extension for C programs end in .c, and they are compiled
using the "cc" command in the linux terminal. An executable file called
"a.out" will be created that will be executed by typing "./a.out" */