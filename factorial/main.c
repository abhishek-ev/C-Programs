#include <stdio.h>

int main ()
{

  int num, i, fact = 1;
  printf ("enter the number");
  scanf ("%d", &num);

  if (num == 0)
    {
      printf ("factorial is 0");
    }

  else
    {
      for (i = 1; i <= num; i++)
	{
	  fact = fact * i;
	}
      printf ("factorial is %d", fact);
    }

  return 0;
}
