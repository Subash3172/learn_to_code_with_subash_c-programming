//c program to find whether the given triangle is equilateral / isosceles /scalene
#include <stdio.h>
int
main ()
{
  int a, b, c;
  printf ("enter three sides of triangle:\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a == b && b == c && c == a)
    {
      printf ("equilateral");
    }
  else if (a == b || b == c || c == a)
    {
      printf ("isosceles");
    }
  else
    {
      printf ("scalene");
    }
  return 0;
}

