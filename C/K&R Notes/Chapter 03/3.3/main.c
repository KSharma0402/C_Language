//3.3: Else-If

#include <stdio.h>

/* else if statements are a special case of nested if-else statements.
we will be using them to implement a binary search algorithm. */

int binsearch(int x, int v[], int n) //n is the size of the array
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid + 1;
		else if (x > v[mid])
			low = mid + 1;
		else //found a match
			return mid;
	}

	return -1; //No match
}

int main(void)
{
	int numarr[] = {1, 3, 5, 7, 16, 25, 34, 66, 149, 623, 1526, 4902, 60238, 589259};

	int y = binsearch(623, numarr, 14);

	printf("The value %d is placed at: %d\n", 623, y);

	return 0;
}
