/******************************************************************************

C program to print the characters in the string that is in the Xth position from the start and friend
input:
subash
2
output:
us
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
  char s[100];
  int x;
  printf("enter string:");
  scanf ("%[^\n]s\n", s);
  printf("enter integer:");
  scanf ("%d", &x);
  if (x <= strlen (s))
    {
      printf ("the character at %d from the start is %c\n",x, s[x - 1]);
      printf ("the character at %d from the last is %c",x, s[strlen (s) - x]);
    }

  return 0;
}



