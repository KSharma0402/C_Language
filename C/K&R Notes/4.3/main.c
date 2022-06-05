//4.3: External Variables

/* Functions are always external. You can't define them to originate from
   another function. */

/* Here we will be exercising with extern vars by making a calculator with a
stack data structure. The calculator with be using reverse Polish notation.

Example:
(1-2) * (4 + 5) -> 1 2 - 4 5 + *

Here's how the stack will work:

After the two numbers are entered, an operator is applied. The operator will
then simplify the two numbers then pop them, pushing the result into stack.

For example, 1 and 2 are entered, then a minus sign is entered. These entries
are then popped and then replaced by (1 - 2).

Here's the general layout for the program:

while (next operator or operand is not EOF indicator)
	if (number)
		push()
	else if (operator)
		pop(operands)
		do(operation)
		push(result)
	
	else if (newline)
		pop() and print(top of stack)
	
	else
		error

	For now, we will only be working with one source file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100	//Max size of the operand or operator
#define NUMBER '0'	//Signal that a number was found

int getop(char []);
void push(double);
double pop(void);

int getch(void);
void ungetch(int c);

int main(void)
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
			case NUMBER:
				push(atof(s));
				break;
			
			case '+':
				push(pop() + pop());
				break;
			
			case '*':
				push(pop() * pop());
				break;
			
			case '-':
				op2 = pop();
				push(pop() - op2); //Can't do (pop() - pop()); Needs to be in order
				break;
			
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("Error: zero divisor\n");
				break;

			case '\n':
				printf("\t%.8g\n", pop()); //%g gives results in either float or scientific notation
				break;
			
			default:
				printf("Error: unknown command %s\n", s);
				break;
		}
	}

	return 0;
}

#define MAXVAL 100	//Maximum depth of val stack
int sp = 0;			//Next free stack position
double val[MAXVAL]; //Value stack

//push: push f onto value stack
void push(double f)
{
	if (sp < MAXVAL)
		val[--sp] = f;
	else
		printf("Error: stack full, can't push %g\n", f);
}

//pop: pop and return top value from stack
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else
	{
		printf("Error: stack empty\n");
		return 0.0;
	}
}

//getop: get next character or numeric operand
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t');

	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;		//not a number
	i = 0;
	if (isdigit(c))		//collect integer part
		while (isdigit(s[++i] = c = getch()));

	if (c == '.')		//collect fraction part
		while(isdigit(s[++i] = c = getch()));

	s[i] = '\0';
	if (c != EOF)
		ungetch(c);

	return NUMBER;
}

/* Let's talk about the functions getch() and ungetch() for a moment.

The ungetch() function pushes the characters it reads into a char array buffer.
getch() reads the buffer and IT gets to decide which characters will actually
go through.

The getch() function calls getchar() if the buffer is empty. */

/* This is the code that shows how getch() and ungetch() work: */

#define BUFSIZE 100

char buf[BUFSIZE];		//buffer for ungetch
int bufp = 0;			// next free position in buf

int getch(void)			// get a (possibly pushed-back) character
{
	return (bufp > 0) ? buf[--bufp] : getchar(); 
}

void ungetch(int c)		// push character back on input
{ 
	if (bufp >= BUFSIZE) 
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

/* Essentially, getch() and ungetch() allow for selection of chars from
the input stream, and using these functions can be more convenient. */