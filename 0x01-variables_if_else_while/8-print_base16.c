#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'program to print base16 numbers'
 *
 * Return: 0
 */

int main(void)
{
char *str = "0123456789abcdef";
int i = 0;

while (i < strlen(str))
{
putchar(str[i]);
++i;
}
putchar('\n');

return (0);
}
