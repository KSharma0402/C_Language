#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 // Outside a word

//Count lines, words and characters in input
int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0; //The assignment of the '=' operator goes from right to left. So all the values are zero.

	while((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n') //Counts newline
			++nl;

		if (c == ' ' || c == '\n' || c == '\t') //Switches state to out if a whitespace is detected.
			state = OUT;

		//If only one statement is being executed, you don't need curly braces in an if-else statment. Curly braces are used to bunch up several statements.

		else if (state == OUT)
		{
			state = IN;
			++nw; //Whenever state is switched from OUT to IN, this branch is executed and the count of word is increased.
		}
	}

	//For exercise 1-12, you can place a putchar(c) function between the else and the if statement above, and another one before the else that prints '\n' , thus executing statements one by one.
}