//c program to print the string until the given character
// input--->subash      ......     string
//input ---->b           ......     character
//output----->sub   

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
  char s[100];
  char c;
  printf ("enter string and character in newlines:\n");
  scanf ("%s\n", s);
  scanf ("%c", &c);
  for (int i = 0; i < strlen (s); i++)
    {
      if (s[i] != c)
	{
	  printf ("%c", s[i]);
	}
      if (s[i] == c)
	{
	  printf ("%c", s[i]);
	  break;
	}
    }
  return 0;
}




//c program to print the string before  the given character
// input--->subash      ......     string
//input ---->b           ......     character
//output----->su   

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
  char s[100];
  char c;
  printf ("enter string and character in newlines:\n");
  scanf ("%s\n", s);
  scanf ("%c", &c);
  for (int i = 0; i < strlen (s); i++)
    {
      if (s[i] != c)
	{
	  printf ("%c", s[i]);
	}
      else
	{
	  break;
	}
    }
  return 0;
}

