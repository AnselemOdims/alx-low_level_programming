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
int i, ct;
while (dest[ct])
ct++;
for (i = 0; i < n && src[i]; i++)
{
dest[ct + i] = src[i];
}
dest[ct + i] = '\0';
return (dest);
}
