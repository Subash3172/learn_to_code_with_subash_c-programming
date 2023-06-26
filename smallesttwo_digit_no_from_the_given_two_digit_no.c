//c program to print the smallesst two digit no. from the given two digit no.
//54-->45
//10--->10

#include <stdio.h>

int main()
{
    int n;
    printf("enter a two digit no:");
    scanf("%d",&n);
    if((n/10) < (n%10) || (n%10==0)){          //54-->%10=4.........-->/10=5
      printf("%d",n);  
    }
    else{
        printf("%d%d",n%10,n/10);
    }

    return 0;
}

