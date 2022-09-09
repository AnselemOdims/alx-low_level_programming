#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'program to print lowercase aphabets'
 *
 * Return: 0
 */

int main(void)
{
unsigned int i;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < strlen(alpha); ++i)
{
putchar(tolower((unsigned char) alpha[i]));
}

for (i = 0; i < strlen(alpha); ++i)
{
putchar(alpha[i]);
}
printf("\n");

return  (0);
}
