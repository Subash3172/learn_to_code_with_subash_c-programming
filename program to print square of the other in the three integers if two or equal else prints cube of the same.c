//c program to print square of the other in the three integers if two are equal else  prints cube of the same
// 2 3 2--> 3^2=9
//2 2 2--->2^3=8
#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("enter three integers:\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a == b && b == c && c == a)
    {
      printf ("%d", a * a * a);
    }
  else if (a == b)
    {
      printf ("%d", c * c);
    }
  else if (b == c)
    {
      printf ("%d", a * a);
    }
  else
    {
      printf ("%d", b * b);
    }

  return 0;
}

