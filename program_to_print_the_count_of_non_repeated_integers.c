//c program to print the count of non-repeated integers .
// the progarm must accept 4 integers separated by space.

#include <stdio.h>

int
main ()
{
  int a, b, c, d, count = 0;
  printf ("enter four integers:\n");
  scanf ("%d %d %d %d", &a, &b, &c, &d);
  if (a != b && a != c && a != d)
    {
      count++;
    }
  if (b != a && b != c && b != d)
    {
      count++;
    }
  if (c != a && c != b && c != d)
    {
      count++;
    }
  if (d != a && d != b && d != c)
    {
      count++;
    }
  printf ("%d", count);

  return 0;
}

