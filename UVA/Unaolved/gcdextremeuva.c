#include<stdio.h>
long gcd(long a,long b)
{
    if(a>b)
    {
        long t=a;
        a=b;
        b=t;
    }
    while(a!=0)
    {
        long mod=b%a;
        b=a;
        a=mod;
    }
    return b;
}
int main()
{
    long n,i,j;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        unsigned long long g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<n+1;j++)
                g+=gcd(i,j);
        }

        printf("%llu\n",g);
    }
    return 0;
}
