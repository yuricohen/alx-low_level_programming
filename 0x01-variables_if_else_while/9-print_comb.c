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

	for (n = 0; n < 10; n++)
{
	putchar(n + '0');
	putchar(',');
	putchar(' ');
}

	putchar('\n');
	return (0);
}
