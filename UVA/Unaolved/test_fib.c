#include<stdio.h>
long long fib(long long a)
{
    if(a==1)
        return 1;
    if(a==2)
        return 2;
    return fib(a-1)+fib(a-2);
}
int main()
{
    long long i;
    long long a[100],b[100];


//    for(i=41;i<80;i++)
//    {
//        b[i]=fib(i);
//    }

    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n<=30)
        {
            for(i=1;i<=30;i++)
            {
                a[i]=fib(i);
            }
        }

        if(n>30&&n<=55)
        {
            for(i=31;i<=55;i++)
            {
                a[i]=fib(i);
            }
        }

        if(n>55)
        {
            for(i=56;i<=80;i++)
            {
                a[i]=fib(i);
            }
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}
