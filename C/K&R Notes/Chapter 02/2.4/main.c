//2.4: Declarations

#include <stdio.h>

int main(void)
{
	//Initialization:
	int lower;

	//Declaration:
	char esc = '\\';

	//External and static variables are initialized to zero by default.

	//Const here is a qualifier:
	const char msg[] = "warning: "; //Won't be modified.
	
	return 0;
}
