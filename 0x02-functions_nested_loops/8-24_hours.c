#include "main.h"

/**
 * print_format - Print Format
 *@i: param
 *@j: param
 *
 * Description: Print formatted inputs
 *
 * Result - void
 */

void print_format(int i, int j)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar('\n');
}

/**
 * jack_bauer - Print time
 *
 * Description: Print 24-hr time format
 *
 * Result - void
 */

void jack_bauer(void)
{
int i = 0, j;

while (i < 24)
{
j = 0;

while (j < 60)
{
print_format(i, j);
j++;
}
i++;
}

return;
}

