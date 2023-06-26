
#include <stdio.h>
#include <string.h>
// Function to print the sum of digits at odd and even positions
void printSum(char num[])
{
	// Initialize odd and even sums
	int odd_sum = 0, even_sum = 0;

	// Length of the string
	int n = strlen(num);

	// Check if the length is even
	if (n % 2 != 0)
	{
		printf("Not accepted");
		return;
	}

	// Calculate even and odd sum
	for (int i = 0; i < n; i++)
	{
		// Check for odd position
		if (i % 2 != 0)
			odd_sum += (num[i] - '0');

		// Check for even position
		else
			even_sum += (num[i] - '0');
	}

	printf("Odd position sum = %d\nEven position sum = %d\n",
		odd_sum, even_sum);
}

// Driver program
int main()
{
	char num[100];
	printf("enter integer:");
	gets(num);
	printSum(num);
	return 0;
}



