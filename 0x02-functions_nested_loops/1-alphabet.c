#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
* main - defines start of the programrint_alphabet(void)
*/

void print_alphabet(void)

{
	char c = 'a';
	while (c <= 'z')
{
	_putchar(c);
	c++;
}

	_putchar('\n');
}
