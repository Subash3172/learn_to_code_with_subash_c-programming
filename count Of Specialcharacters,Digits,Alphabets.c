/******************************************************************************
c program to print the count of alphabets,digits and specialcharacters
based on ASCII VALUES
*******************************************************************************/

#include <stdio.h>

int
main ()
{
  char s[1000];
  printf ("enter string:");
  scanf ("%[^\n]", s);
  int alphabets = 0, digits = 0, specialcharacters = 0;
  for (int i = 0; s[i]; i++)
    {
      if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
	alphabets++;
      else if (s[i] >= 48 && s[i] <= 57)
	digits++;
      else
	specialcharacters++;
    }
  printf ("count of alphabets: %d\n", alphabets);
  printf ("count of digits: %d\n", digits);
  printf ("count of specialcharacters: %d\n", specialcharacters);
  return 0;
}

