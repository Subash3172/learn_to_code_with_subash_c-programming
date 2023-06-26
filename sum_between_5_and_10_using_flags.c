/******************************************************************************
write a c program that accept N integers as the input .
The program must traverse the given integers and if the integer 5 is encountered 
then the following integers must be added till the integer 10 occurs.
finally, the program must print the total sum as the output.                
boundary condition:1<=n<=1000      .               
input format:  
the first line contains N. 
the second line contains N integers separated by space(s).               
output format:  the first line contains the sum as per the given conditions.       
example input/output:-    
input:9                    
2 5 3 2 10 3 10 5 4     
output:9      
*******************************************************************************/


#include <stdio.h>

int main ()
{
  int N;
  int sum = 0;

  //Get the number of elements
  scanf ("%d", &N);

  int i;
  int curr;
  int encountered_five = 0;

  //Loop through the elements
  for (i = 0; i < N; i++)
    {
      scanf ("%d", &curr);

      //If five is encountered
      if (curr == 5)
	{
	  encountered_five = 1;
	  continue;
	}

      //If five is encountered and the element is not ten
      if (encountered_five == 1 && curr != 10)
	{
	  sum += curr;
	  continue;
	}

      //If ten is encountered after five
      if (encountered_five == 1 && curr == 10)
	{
	  encountered_five = 0;
	  continue;
	}
    }

  //Print the sum
  printf ("sum of elements between 5 & 10 is %d", sum);

  return 0;
}

