//1.10: External variables and scope
#include <stdio.h>
#include <math.h>

//In C, variables only exist inside certain scopes. A variable declared inside a function will only appear when it is called, and then disappear once the function execution is over. That is why a variable declared in one function cannot be accessed in the other function.

//This is a modification of the longest line reading program that now uses external variables.

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getl(void);
void copy(void);

int main(void)
{
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while((len = getl()) > 0)
  {
    if (len > max)
    {
      max = len;
      copy();
    }
  }

  if (max > 0)
  {
    printf("%s\n" , longest);
  }
  return 0;
}

int getl(void)
{
  int c , i;
  extern char line[];

  for(i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if(c == '\n')
  {
    line[i] = c; ++i;
  }

  line[i] = '\0';
}

void copy(void)
{
  int i;
  extern char line[] , longest[];

  i = 0;
  while((longest[i] = line[i]) != '\0')
    ++i;
}

/*A few things to note here:
- The extern keyword is not needed (for this program at least)
  when declaring external variables
- The extern keyword is not needed in the source (main.c) file if it
  has been defined in the source file.
- If there are multiple .c files and the global variable is NOT declared
  in the source file, however, then you DO need the extern keyword in
  files where the variable is not defined.
*/