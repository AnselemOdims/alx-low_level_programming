#include "main.h"

/**
 * *_strcat - string concatenation
 * @dest: destination string
 *@src: source string
 *
 * Description: function to concatenate two strings
 *
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
int n, i;
n = 0;
while (dest[n])
n++;
for (i = 0; src[i]; i++)
{
dest[n++] = src[i];
}
dest[n + i] = '\0';
return (dest);
}
