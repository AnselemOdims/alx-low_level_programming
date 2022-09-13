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
if (j > 0)
{
if (res < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}

if (res > 9)
{
putchar((res / 10) + '0');
putchar((res % 10) + '0');
}
else
{
putchar(res + '0');
}
++j;
}
putchar('\n');

++count;
++i;
}
}
