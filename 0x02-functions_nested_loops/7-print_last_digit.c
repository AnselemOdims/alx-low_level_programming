#include "main.h"

/**
 * print_last_digit - Last Digit
 *@n: The input
 *
 * Description: 'function to print the last digit of a number'
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int res;
if (n < 0)
{
res = (n * (-1)) % 10;
}
else
{
res = n % 10;
}

_putchar(res + '0');
return (res);
}
