/******************************************************************************
Write a c program to accept two integers X and Y as the input. 
The program must swap the last two digits of X with the last two digits of Y.
Then the program must print their product as the output.
Boundary Condition(s):
10 <= X, Y <= 10^4
Input Format:
The first line contains X and Y separated by space.
Output Format:
The first line contains the product as per the given condition.
Example Input/Output 1:
Input:
34 123
Output:
3082
Explanation:
The last two digits in both integers are swapped to get 23 C134
*******************************************************************************/
#include<stdio.h>

int
main ()
{
  int X, Y, product;
  printf ("enter integer x&y:");
  // Accepting two integers X and Y 
  scanf ("%d %d", &X, &Y);

  // Checking boundary conditions 
  if (X < 10 || X > 10000 || Y < 10 || Y > 10000)
    {
      printf ("Invalid input");
      return 0;
    }

  // Extracting last two digits from X and Y 
  int X_last_two_digits = X % 100;
  int Y_last_two_digits = Y % 100;

  // Swapping last two digits 
  int first_number = (X / 100) * 100 + Y_last_two_digits;
  int second_number = (Y / 100) * 100 + X_last_two_digits;

  // Calculating the product 
  product = first_number * second_number;

  // Displaying the product 
  printf ("%d", product);

  return 0;
}

