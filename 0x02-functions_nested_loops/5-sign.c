#include "_putchar.c"

/**
 * print_sign - Print Sign
 *@n: The number to check
 *
 * Description: 'function to print sign of a number'
 *
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
int res;

if (n > 0)
{
res = 1;
_putchar('+');
}
else if (n < 0)
{
res = -1;
_putchar('-');
}
else
{
res = 0;
_putchar(0);
}

return (res);
}
