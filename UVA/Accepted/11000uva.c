#include<stdio.h>
int fib(int a)
{
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    if(a==2)
        return 2;
    int ans=fib(a-1)+fib(a-2);
    return ans;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;
        printf("%ld %ld\n",(fib(n+1)-1),(fib(n+2)-1));
    }
    return 0;
}
