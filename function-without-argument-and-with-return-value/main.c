#include<stdio.h>
int sum ();
void main ()
{
  int result;
  result = sum ();
  printf ("sum is :%d", result);
}

int sum ()
{
  int a, b;
  printf ("enter the numbers :");
  scanf ("%d%d", &a, &b);
  return a + b;
}
