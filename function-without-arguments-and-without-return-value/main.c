
#include <stdio.h>
void sum ();
void main ()
{
  printf ("sum is :");
  sum ();
}

void sum ()
{
  int a, b;
  printf ("enter the numbers");
  scanf ("%d%d", &a, &b);
  printf ("sum %d", a + b);
}
