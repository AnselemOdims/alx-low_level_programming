#include "main.h"

/**
 * _isupper - Upper?
 *@c: The character to check
 *
 * Description: 'function to check if input is uppercase'
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}

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

/**
 * _isalpha - Alpha?
 *@c: The character to check
 *
 * Description: 'program to check for alphabets'
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
if (_isupper(c) || _islower(c))
return (1);
else
return (0);
}
