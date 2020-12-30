#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,sum;
    while(scanf("%d %d",&i,&j)==2)
    {
        sum=0;
        sum=i-j;
        sum=abs(sum);
        printf("%d\n",sum);
    }
    return 0;
}
