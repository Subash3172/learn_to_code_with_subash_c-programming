//sum of odd integers in a given no. using a function
#include <stdio.h>
int sumOfOddNumbers(int n){
    int r,sum=0;
    while(n>0)  
{   
    r=n%10;
    n/=10;
         if(r%2!=0)         //(n==1) can also be used
          {
           sum+=r;
         }
}
    return sum;
}

int main()
{
    int n;
    printf("Enter integer:\n");
    scanf("%d",&n);
    printf("sum of odd digits: %d",sumOfOddNumbers(n));
    return 0;
}

