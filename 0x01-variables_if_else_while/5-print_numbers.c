#include <stdio.h>

/**
* main - defines start of the program
*
* n - defines the variable that will be generated
*
* Return:0
*/

int main(void)
{
	int n;

	n = 0;
	for (n = 0; n >= 0 && n < 10; n++)
{
	printf("%d", n);
}
	printf(" ");
	return (0);
}
