#include<stdio.h>
int fib(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int f=fib(n);
        printf("%d\n",f);
    }
}
