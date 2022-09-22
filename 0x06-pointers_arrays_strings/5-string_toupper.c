#include "main.h"

/**
 *string_toupper - convert string to upper
 *@str: the string to convert
 *
 * Description: function to convert a string to uppercase
 *
 * Return: the converted string
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
str[i] = str[i] - 32;
}
return (s);
}
