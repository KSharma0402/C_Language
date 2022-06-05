//2.3: Constants (Part 2)
#include <stdio.h>

//This is a string constant:
#define strLit "I am a string"

/* Strings have a character length that is one more than
the number of characters enclosed in quotes since all strings
end with the null character '\0'
*/

/* strlen: return length of s */
int strlen(char s[])
{
	int i;
	
	while (s[i] != '\0')
		++i;
	return i;
}
//This function can be found in the standard header <string.h>


int main(void)
{
	char newstr[] = "This is a string";
	int len = strlen(newstr);

  printf("The length of the string is: %d\n", len);
  return 0;
}