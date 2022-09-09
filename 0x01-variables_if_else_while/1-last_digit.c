#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'program to print last digit'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int lt_dt;

srand(time(0));
n = rand() - RAND_MAX / 2;
lt_dt = n % 10;

if (lt_dt > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lt_dt);
else if (lt_dt == 0)
printf("Last digit of %d is %d and is 0\n", n, lt_dt);
else if (lt_dt < 6 && lt_dt != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt_dt);

return (0);
}
