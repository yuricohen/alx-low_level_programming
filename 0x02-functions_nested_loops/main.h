
void printing(void);

void printing(void)

{
    printf("_putchar\n");
}

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
