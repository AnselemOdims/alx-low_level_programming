#include "main.h"

/**
 *reverse_array - Reverse array function
 *@a: the array to reverse
 *@n: the length of the array
 *
 * Description: function to reverse an array
 *
 * Return: the reversed array
 */

void reverse_array(int *a, int n)
{
int temp, s, e;

s = 0;
e = n - 1;

while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
