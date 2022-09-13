#include "main.h"

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
