#include "main.h"

/**
 *_strcmp - String compare function
 *@s1: First string
 *@s2: Second string
 *
 * Description: function to compare two strings
 *
 * Return: the difference of the first mistmatch
 */

int _strcmp(char *s1, char *s2)
{
int ct = 0, i, res;

while (s1[ct])
ct++;
for (i = 0; i < ct && s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
}
return (res);
}
