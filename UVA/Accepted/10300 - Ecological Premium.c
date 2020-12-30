#include<stdio.h>
int main()
{
    long long t,n,a,b,c,i,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            sum+=(a*c);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
