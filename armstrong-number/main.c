#include<stdio.h>
int main ()
{
  int n, temp, sum = 0, num;
  printf ("enter the number=");
  scanf ("%d", &n);
  num = n;
  
  
  while (n > 0)
    {
      temp = n % 10;
      sum = sum + (temp * temp * temp);
      n = n / 10;
    }
    
    
  if (num == sum)
    printf ("%d is a armstrong  number ", num);
  else
    printf ("%d is not an armstrong number", num);
  return 0;
}
