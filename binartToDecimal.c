// binary to decimal conversion
#include <stdio.h>

int main()
{
    int n;
    printf("enter decimal:");
    scanf("%d",&n);
    int i=1,binary=0,rem;
    while(n!=0){                            //while(n>0)      eg .:8-->1
        rem=n%2;                    //gives remainder--> 8%2=0
        n/=2;                       //gives-->8/2=4
        binary+=rem*i;              //for storing the binary values -->binary=0+0*1=0
        i*=10;                     //--->*10 on each iteration-->i=1*10=10
    }
    printf("the binary value of %d is %d",n,binary);
 
    return 0;
}

