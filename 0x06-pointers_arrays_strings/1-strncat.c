#include "main.h"

/**
 *_strncat - String concatenation
 *@dest: Destination string
 *@src: Source string
 *@n: number
 *
 * Description: Concatenate two strings
 *
 * Return: the concatenated string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int i, c;
while (dest[c])
c++;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';
return (dest);
}
