/******************************************************************************

c program to print the previous and next alphabet from the given character input
i/p:
c
o/p:
b d

*******************************************************************************/

#include <stdio.h>

int main ()
{
  char ch;
  printf ("enter an alphabet:");
  scanf ("%c", &ch);
  if (ch == 'a')
    {
      printf ("z b");
    }
  else if (ch == 'z')
    {
      printf ("y a");
    }
  else
    {
      printf ("%c %c", ch - 1, ch + 1);
    }
  return 0;
}

