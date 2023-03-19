#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* This program will assign a random number to the variable n and print the last digit of the number stored in the variable
*
* main - defines start of the program
*
* n - defines the variable that will be generated
*
* Return:0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
        if (n%10 > 5)
{
        printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
}
        else if (n%10 == 0)
{
        printf("Last digit of %d is %d and is zero\n", n, n%10);
}
        else if (n%10 < 6 && n%10 != 0)
{
        printf("Last digit of %d is %d and is less than 6 and is not zero\n", n, n%10);
}
	return (0);
}
