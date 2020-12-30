#include<stdio.h>
int gcd(int a,int b)
{
    if(a>b)
    {
        int t=a;
        a=b;
        b=t;
    }
    while(a!=0)
    {
        int mod=b%a;
        b=a;
        a=mod;
    }
    return b;
}
int main()
{
    int n,i,j;
    while(scanf("%d %d",&i,&j)==2)
    {
        long g=gcd(i,j);


        printf("%ld\n",g);
    }
    return 0;
}
