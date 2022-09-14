/* #include "main.h" */
#include <stdio.h>

void print_to_98(int n)
{
  if(n <= 98)
    {
  while (n <= 98)
    {
      if(n < 0)
	{
	  int res = n * (-1);
	  if(res > 9)
	    {
	      putchar('-');
	       putchar((res/10) + '0');
	       putchar((res%10) + '0');
	    }
	  else
	    {
	       putchar('-');
	  putchar((n*(-1)) + '0');
	    }
	}
      else if(n > 9)
	{
	  putchar((n/10) + '0');
	  putchar((n%10) + '0');
	}
      else
	{
	  putchar(n + '0');
	}

      if (n < 98)
    {
      putchar(',');
      putchar(' ');
    }
      ++n;
    }
    }
  else
    {
      while (n >= 98)
	{
	  putchar((n/10) + '0');
	  putchar((n%10) + '0');
	   putchar(',');
      putchar(' ');
	  --n;
	}
    }
  putchar('\n');
}

int main(void)
{
  print_to_98(111);
}
