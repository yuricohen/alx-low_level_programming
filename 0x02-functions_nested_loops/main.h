#include <stdio.h>

void printing(void);

void printing(void)

{
    printf("_putchar\n");
}

void print_alphabet(void);

void print_alphabet(void)	
{
    char letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
}
