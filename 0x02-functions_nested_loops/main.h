#include <stdio.h>

void phabet(void);

void lphabet(void)	
{
    char letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
}
