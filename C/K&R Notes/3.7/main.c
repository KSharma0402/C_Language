//3.7: Break and Continue

#include <stdio.h>
#include <string.h>

//The 'break' keyword can be used to escape loops like switch statements
//The function below removes trailing whitespaces and uses 'break'

int trip(char s[])
{
	int n;

	for (n = strlen(s)-1; n >= 0; n--) //for loop starts at end.
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;

	s[n+1] = '\0';
	return n;
}


int main(void)
{
	/* The next keyword we're talking about is 'continue'. Not useful for
	switch statements since they already fall through. */

	int numarr[12] = {-12, 25, -8, 19, -32, 54, -14, -7, 4, 15, 17, 32};
	int posnums[10];

	for (int i = 0, j = 0; i < 12; i++)
	{
		if (numarr[i] < 0)
			continue; //Forces the next iteration of the loop
			//Kind of like a 'break' that does not leave the loop
		posnums[j] = numarr[i], j++; //This is why we don't need an else
	}

	return 0;
}
