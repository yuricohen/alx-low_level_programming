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
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
	for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
	putchar('\n');
	return (0);
}
