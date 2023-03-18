#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - defines start of the program
* 
* n - defines the variable that will be compared
*
* Return:0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
{
	printf("%d\n is positive\n");
}
	else if (n == 0 )
{
	printf("%d\n is 0\n");
}
	else
{
	printf("%d\n is negative\n");
}
	return (0);
}
