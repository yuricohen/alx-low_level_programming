#include <stdio.h>

void printing(void);

void printing(void)

{
    printf("_putchar\n");
}

int _putchar(char c);

void print_alphabet(void);

void print_alphabet(void)	
{
    char letter = 'a';
    while (letter <= 'z')
    {
       _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
