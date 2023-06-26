
#include <stdio.h>
int
sumOfSmallestAndLargest (int arr[], int n)
{
  int min = arr[0], max = arr[0];	// creating two separate arrays for storing min and max values for comparison
  for (int ele = 1; ele < n; ele++)
    {
      if (arr[ele] > max)
	{
	  max = arr[ele];
	}
      if (arr[ele] < min)
	{
	  min = arr[ele];
	}
    }
  return min + max;
}

int
main ()
{
  int n;
  printf ("enter the no. of elements in the array:\n");
  scanf ("%d", &n);
  int arr[n];
  for (int ctr = 0; ctr < n; ctr++)
    {
      scanf ("%d", &arr[ctr]);
    }
  printf ("%d", sumOfSmallestAndLargest (arr, n));
  return 0;
}

