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
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long m,n;
        scanf("%ld %ld",&m,&n);
        long g=gcd(m,n);
        long j,total=0;
        for(j=1;j<=g;j++)
        {
            if(g%j==0)
                total++;
        }
        printf("%ld\n",total);
    }
    return 0;
}
