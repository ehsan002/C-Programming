#include<stdio.h>
int main()
{
    int n,a,i,j,k;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d",&i,&j,&k);
        if(i<=20&&j<=20&&k<=20)
        {
            printf("Case %d: good\n",a+1);
        }
        else
            printf("Case %d: bad\n",a+1);
    }
    return 0;
}
