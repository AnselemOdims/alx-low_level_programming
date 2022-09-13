#include "main.h"

/**
 * times_table - Times table
 *
 * Description: Print times table
 *
 * Return: void
 */

void times_table(void)
{
int i = 0, count = 0, j;

while (i < 10)
{
j = 0;

while (j <= 9)
{
int res = j *count;

if (res > 9)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else
{
_putchar(res + '0');
}

if (j < 9)
{
if (res < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
}
_putchar(' ');
}
++j;
}
_putchar('\n');

++count;
++i;
}
}
