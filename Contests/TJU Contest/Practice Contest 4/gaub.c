#include<stdio.h>
int main()
{
    long long t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long m,n,sum;
        scanf("%lld %lld",&m,&n);

        long long sum1=(m*(m-1))/2;
        long long sum2=(n*(n+1))/2;
        sum=sum2-sum1;

        printf("Scenario #%lld:\n%lld\n\n",i+1,sum);
    }
    return 0;
}
