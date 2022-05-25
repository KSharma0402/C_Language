//1.9: Character arrays
#include <stdio.h>

int getl(char line[] , int MAXLINE); //This is the getl() function. This will read user input line by line, and change the current array to the one it read.

void copy(char to[] , char from[]); //This function is useful for copying one string into another string.

#define MAXLINE 1000

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  //Set the max length of the input line to 1000; set aside a space of 1000 characters.
  char longest[MAXLINE]; //Longest line is saved here

  max = 0;
  while((len = getl(line , MAXLINE)) > 0) //The getl function is executed until the length of the line is zero.
  {
    if (len > max) //This is sort of like the algorithm of finding the maximum value in a list. It is checked if the newer line is longer than the current line. Then the array is copied.
    {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)
  {
    printf("%s is the longest\n" , longest);
  }

  return 0;
}

int getl(char s[], int lim) //The length of the getline function does not have to be declared because its length has already been set in  main().

//int is the default return type in C.
{
  int c , i; 
  for(i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
              // ^ lim - 1 since indexing starts from 0.
    s[i] = c;
  
  if (c == '\n')
  {
    s[i] = c; //int i has already iterated in the for loop, so there is no need to put in s[i + 1]
    ++i;
  }

  s[i] = '\0'; //This is s[i + 2], where i was the final non-whitespace character. This is set equal to terminating chacter. This is used for string literals by convention, however.

  return i;
}

void copy(char to[] , char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}