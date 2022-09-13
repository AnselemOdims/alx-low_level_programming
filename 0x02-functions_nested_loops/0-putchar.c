#include "_putchar.c"

/**
 * main - Entry point
 *
 * Description: 'program to print _putchar'
 *
 * Return: 0
 */

int main(void)
{
char *res = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(res[i]);
++i;
}
_putchar('\n');

return (0);
}
