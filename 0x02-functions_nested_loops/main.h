#include <unistd.h>

void print_alphabet(void);

void print_alphabet(void)	
{
    char letter = 'a';
    while (letter <= 'z')
    {
       _putchar(letter);
        letter++;
    }
    putchar('\n');
}
