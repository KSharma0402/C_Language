//Chapter 4: Functions and Program Structure

//4.1: Basics of functions

#include <stdio.h>

/* Let's make a program that filters a sentence containing a specific string.
This will be a special case of the 'grep' command in unix. */

/* The code layout for such program will be as follows:

	while (there's another line)
		if (the line contains the pattern)
			print()

	We will be writing a function that searches for a string 's' in a string 't'
	if it is found, the function will return the starting index in 't' where 's'
	is found. If not found, it will return a '-1'.

	(There is a function in stdlib known as strstr(), but it returns a pointer)
*/

#define MAXLINE 1000 //Maximum input line length.

int getlin(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";	//Pattern to search for.

int main(void)
{
	char line[MAXLINE];
	int found = 0;

	while (getlin(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}
	return found;
}

int getlin(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	
	if (c == '\n')
		s[i++] = c;
}

//return index of t in s, -1 if none
int strindex(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);

		if (k > 0 && t[k] == '\0')
			return i;
	}

	return -1;
}