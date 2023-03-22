#include <stdio.h>
#include "main.h"

/**
* main - defines start of the program
*
* Return:0
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
