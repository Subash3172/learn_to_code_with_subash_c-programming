// c program to convert 12 hour to 24 hour format
#include<stdio.h>

int
main ()
{
  int hh, mm;
  printf ("Enter The Time in 12 Hour Format (HH:MM): ");
  scanf ("%d:%d", &hh, &mm);
  if (hh < 12)
    {
      printf ("The Time in 24 Hour Format is: %02d:%02d AM", hh, mm);
    }
  else if (hh == 12)
    {
      printf ("The Time in 24 Hour Format is: %02d:%02d PM", hh, mm);
    }
  else
    {
      printf ("The Time in 24 Hour Format is: %02d:%02d PM", hh - 12, mm);
    }
  return 0;
}

