#include<stdio.h>
int main()
{
    long long i,a[55],t,n;
    a[1]=2,a[2]=3;
    for(i=3;i<52;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("Scenario #%lld:\n%lld\n\n",i+1,a[n]);
    }
    return 0;
}
