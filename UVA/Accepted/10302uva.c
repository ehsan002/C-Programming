#include<stdio.h>
int main()
{
    long n,i;
    while(scanf("%d",&n)==1)
    {
        long sum=0;
        for(i=1;i<=n;i++)
            sum=sum+i*i*i;
        printf("%ld\n",sum);
    }
}
