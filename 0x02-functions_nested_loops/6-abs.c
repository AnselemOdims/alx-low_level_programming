#include "_putchar.c"

/**
 * _abs - Get absolute
 *@n: The number to check
 *
 * Description: 'function to check for absolute value'
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
int res;

if (n < 0)
res = n * (-1);
else
res = n;

return (res);
}
