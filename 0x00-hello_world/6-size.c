#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Hello, printf'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char chr;
int i;
long int l;
long long int ll;
float f;

printf("Size of a char: %c byte(s)\n", (char) sizeof(chr));
printf("Size of an int: %d byte(s)\n", (int) sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of a long long int: %lld byte(s)\n", (long long int) sizeof(ll));
printf("Size of a float: %d byte(s)\n", (int) sizeof(f));

return (0);
}
