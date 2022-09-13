#include "_putchar.c"

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
 * main - Entry point
 *
 * Description: 'program to call the function prototype'
 *
 * Return: 0
 */

int main(void)
{
_islower('h');
}
