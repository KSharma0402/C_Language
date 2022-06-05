//5.3: Pointers and Arrays
#include <stdio.h>

int main(void)
{
	//Consider the array
	int numarr[] = {1, 5, 7, 8, 14, 17, 18, 19, 20, 34};

	//Let's declare a pointer to the first element of the array:
	int* ptrnumarr = &numarr[0];

	//Obviously, dereferencing the zeroth element will give you 1.
	int newNum = *ptrnumarr;
	printf("The value of the newNum is: %d\n", newNum);

	/* Here's the interesting bit: if you increment the value of the pointer by 1,
	you will be accessing the address of the second element in the array. */

	int secondNum = *(ptrnumarr + 1); //Need to put in parentheses
	printf("The value of secondNum is: %d\n", secondNum); //Printing dereferenced value

	/* If you keep on incrementing the pointer, it will always be pointing to the
	next element in the array.

	This essentially means the statements:
		int n = A[i];
	and
		int n = *(ptrA += 1);
		(where 'i' is 0, 1, 2, 3, ...)

	are equivalent, assuming the 'ptrA' points to the array 'A'
	*/

	//Another way to write pointers accessing arrays is:

	int* newptrarr = numarr; //Don't need indexing OR call by reference.

	return 0;
}
