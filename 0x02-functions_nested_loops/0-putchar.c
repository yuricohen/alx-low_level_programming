#include "main.h"
#include <unistd.h>

/**
 * printing - prints the string _putchar, followed by a new line
 */
void printing(void)
{
        char s[] = "_putchar\n";
        int i;

        for (i = 0; s[i] != '\0'; i++)
            _putchar(s[i]);
}

/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
        printing();
        return (0);
}
