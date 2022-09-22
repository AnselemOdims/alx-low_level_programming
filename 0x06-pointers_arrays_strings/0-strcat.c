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
int dest_len = strlen(dest);
for (int i = 0; src[i]; i++)
dest[dest_len + i] = src[i];
return (dest);
}
