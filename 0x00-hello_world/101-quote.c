#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
char chr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fwrite(chr, sizeof(chr), 1, stderr);
return (1);
}
