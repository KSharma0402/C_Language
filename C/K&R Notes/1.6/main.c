//1.6: Arrays
#include <stdio.h>

/* count digits, white space, others */
int main(void)
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for(i = 0; i < 10; ++i) //Initialize the array and set value of all elements to zero.
  {
    ndigit[i] = 0;
  }

  while((c = getchar()) != EOF)
  {
    if('0' <= c && c <= '9') 
      ++ndigit[c - '0'];
      //Each element in the list will store the occurrence of its index whenever the getchar() function is reading the user input. The index number itself is being used to count each character's occurrence.
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  //Prints the output
  printf("Digits =");
  for(i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  
  printf(", white space = %d, other = %d\n", nwhite, nother);

  return 0;
}