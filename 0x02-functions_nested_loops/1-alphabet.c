#include "_putchar.c"

/**
 * print_alphabet - Print alphabet
 *
 * Description: 'program to print lowercase alphabets'
 *
 * Return: 0
 */

void print_alphabet(void)
{
int i = 'a';

while (i <= 'z')
{
_putchar(i);
++i;
}
_putchar('\n');

return;
}

/**
 * main - Entry point
 *
 * Description: 'program to call the function prototype'
 *
 * Return: 0
 */

int main(void)
{
print_alphabet();

return (0);
}
