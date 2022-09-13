#include "_putchar.c"

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
int res;

if (c >= 65 && c <= 90)
res = 1;
else
res = 0;

return (res);
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
int res;

if (c >= 97 && c <= 122)
res = 1;
else
res = 0;

return (res);
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
int res;

if (_isupper(c) || _islower(c))
res = 1;
else
res = 0;

return (res);
}
