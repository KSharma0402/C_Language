#include <stdio.h>

int main(void)
{
	//Initialization; conditional statment; iteration
	for(int i = 0; i < 10; i++)
	//The loop checks the conditional statement each time *before* it executes
	{
		printf("%d" , i);
	}
	
	return 0;
}
