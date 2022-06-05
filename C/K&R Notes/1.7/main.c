//1.7: Functions
#include <stdio.h>

int power(int m, int n); //Function declaration; This is a function prototype which can be changed later. Parameter names are optional, so they can be changed in the future.

/* test power function */

int main()
{
  int a = 1;
  int b = 2;
  printf("%d %d\n", a, b);

  for (int i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
  
  return 0;
}

int power(int base, int n)
{
  int i, p;
  p = 1;
  for(i = 1; i < n; ++i)
    p = p * base;
  
  return p;
}