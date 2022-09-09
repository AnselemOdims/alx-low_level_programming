#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'program to print lowercase aphabets in reverse'
 *
 * Return: 0
 */

int main(void)
{
char *str = "abcdefghijklmnopqrstuvwxyz";
int i = strlen(str) - 1;

while (i >= 0)
{
putchar(str[i]);
--i;
}
putchar('\n');

return (0);
}
