#include<stdio.h>
int
main ()
{
  int num1, num2, num3;
  printf ("enter numbers ");
  scanf ("%d%d%d", &num1, &num2, &num3);

  if (num1 < num2 && num3 < num2)
    {
      printf ("greater number is %d", num2);
    }
  else if (num3 > num1 && num3 > num2)
    {
      printf ("greater number is %d", num3);
    }
  else
    {
      printf ("greater number is %d", num1);
    }

}
