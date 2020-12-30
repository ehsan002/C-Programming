#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long sum=((n*(n+1)*(n+1))/2)-((n*(n+1)*((2*n)+1))/6);
        printf("%lld\n",sum);
    }
    return 0;
}
