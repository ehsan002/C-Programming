#include <stdio.h>
int main()
{
    int i,j,sum;
    while(scanf("%d %d",&i,&j)==2)
    {
        sum=0;
        if(i==-1&&j==-1)
            break;
        sum=abs(i-j);
        if(sum>50)
        {
            sum=sum-50;
            sum=50-sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
