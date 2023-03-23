#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
* printing - defines start of the program
*
* Return:0
*/

void printing(void)

{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	_putchar(s[i]);

	return (0);   
}
