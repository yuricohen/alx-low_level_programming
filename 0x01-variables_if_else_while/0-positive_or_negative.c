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
	printf(n is positive\n)
}
	else if (n==0)
{
	printf(n is 0\n)
}
	else
{
	printf(n is negative\n)
}
	return (0);
}
