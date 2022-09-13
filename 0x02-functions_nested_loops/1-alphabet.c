#include <string.h>
#include "_putchar.h"

/**
 * print_alphabet - Print alphabet
 *
 * Description: 'program to print lowercase alphabets'
 *
 * Return: 0
 */

void print_alphabet(void)
{
char *alpha = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (i < strlen(alpha))
{
_putchar(alpha[i]);
++i;
}

return;
}

/**
 * main - Entry point
 *
 * Description: 'program to print lowercase aphabets'
 *
 * Return: 0
 */

int main(void)
{
print_alphabet();

return (0);
}
