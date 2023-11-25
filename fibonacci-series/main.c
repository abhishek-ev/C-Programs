
#include <stdio.h>

int main ()
{
  int num, a = 0, b = 1, temp, i = 2;
  printf ("enter the numbers limit ");
  scanf ("%d", &num);
  printf ("%d\n%d\n", a, b);

  for (i = 2; i < num; i++)
    {
      temp = a + b;
      printf ("%d\n", temp);
      a = b;
      b = temp;

    }

  return 0;
}

