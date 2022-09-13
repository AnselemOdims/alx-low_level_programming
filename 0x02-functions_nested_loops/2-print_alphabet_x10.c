#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet
 *
 * Description: 'program to print lowercase alphabets 10 times"
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0, alpha;

while (i < 10)
{
alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
++alpha;
}
_putchar('\n');
++i;
}

return;
}
