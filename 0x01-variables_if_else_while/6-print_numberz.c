#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program decimal single digits'
 *
 * Return: 0
 */

int main(void)
{
int i = 0;

while(i < 10)
{
putchar(i + '0');
++i;
}
putchar('\n');
 
return (0);
}
