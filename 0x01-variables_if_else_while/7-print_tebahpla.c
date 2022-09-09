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
int i = strlen(str);

for (; i > -1; i--)
{
putchar(str[i]);
}
putchar('\n');

return (0);
}
