#include <stdio.h>

/*
How functions in C work compared to other languages is that they don't modify the values of the variables passed into the function.
*/

void DoStuff(int a, int b) //Whenever values are passed into a function, a copy of those variables is automatically created and then operations are done with them. This is known as calling functions by value.
{
  int c = a;
  a = 2 * b;
  b = (int)(c/2);
}

int main(void)
{
  int a = 1;
  int b = 2;

  DoStuff(a, b); //Calling functions by value helps to make sure that the original values of the variables stay the same.

  printf("%d %d\n", a, b); //This is the reason why the values of variables "a" and "b" remained unchanged.

  return 0;

  //However, it is sometimes needed for a function to modify the value of a variable inside another function. So, it is possible to call functions by reference (modify their original values) by using pointers (memory address) of the variables. This will be covered later.

  /*
    Arrays/Lists in C, however, can only be called by reference because the argument passed into the
	function has the memory address of the variable.
  */
}