#include <stdio.h>

//We'll now turn towards using pointers to pass an array into a function.

//strlen: return length of string s
int strlen(char* s)
{
	int n;
	for (n = 0; *s != '\0'; s++, n++);
	return n;
}

int altstrlen(char s[])	//Basically the same as the function above
{
	int n;
	for (n = 0; s[n] != '\0'; n++);

	return n;
}

/* A few more things to note about pointers:
- You can't treat arrays like a variable. Consider:
	int arr[10];
	arr++;	//WRONG

- You need a separate variable that stores the address of the array.
*/

int main(void)
{
	printf("%d\n", strlen("Hello World!"));
	printf("%d\n", altstrlen("Hello World!"));

	//You can also start at the second index:
	char hello[] = "Hello World!";
	printf("%d\n", strlen(&hello[2]));

	//You can also do negative indexing with this, but you don't want to.

	return 0;
}
