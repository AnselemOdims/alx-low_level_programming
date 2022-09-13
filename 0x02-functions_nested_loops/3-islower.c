#include "main.h"

/**
 * _islower - Lower?
 *@c: The character to check
 *
 * Description: 'program to check for lowercase characters'
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
