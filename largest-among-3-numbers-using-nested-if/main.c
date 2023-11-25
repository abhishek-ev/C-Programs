
#include <stdio.h>

void main ()
{
  int num1, num2, num3;
  printf ("enter numbers");
  scanf ("%d%d%d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3)
    {
      printf ("biggest number is%d", num1);
      if (num2 > num1 && num2 > num3)
	  printf ("biggest number is%d", num2);
    }
 else
	{
	  printf ("biggest number is%d", num3);
	}
    
   }
