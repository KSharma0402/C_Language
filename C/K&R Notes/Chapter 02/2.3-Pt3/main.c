//2.3: Constants (Part 3)
#include <stdio.h>

/* One last constant type that is going to be discussed is the
enumeration constant. An enumeration is a list of constant
integer values. */

enum boolean { NO, YES };
/* The first variable has a value of 0, the next 1, and so on
in this type of list. Unless you specify explicit values.
If not all values are specified, the list will continue
progression from the last value.*/


//Here are some examples of enum lists

enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
/* FEB = 2, MAR = 3, etc. */

//Names must be distinct in an enum, but values can be the same.

int main(void)
{
  return 0;
}
