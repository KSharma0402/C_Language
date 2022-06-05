//5.2: Pointers and Function Arguments

#include <stdio.h>

//You can call objects by reference by declaring pointers in a function:

void swap(int* x, int* y) //Swaps the values of 'x' and 'y'
{
	int c;
	c = *x;
	*x = *y;
	*y = c;

	return;
}

int main(void)
{
	int a = 10;
	int b = 24;
	printf("The initial values of 'a' and 'b' are (respectively): %d %d\n", a, b);

	swap(&a, &b);
	printf("The values after swapping are (I swear I didn't cheat): %d %d\n", a, b);

	return 0;
}
