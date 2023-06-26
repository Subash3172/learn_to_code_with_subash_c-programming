//progarm to swap the tenth and hundred digit in the given integer
#include <stdio.h>
int main()
{
    int n;
    printf("enter integer:");
    scanf("%d",&n);
    int unit,tenth,hundred;
    unit=n%10;
    tenth=(n%100)/10;
    hundred=(n%1000)/100;
    printf("%d",hundred*1+tenth*10+unit*100+(n/1000)*1000);
    return 0;
}

