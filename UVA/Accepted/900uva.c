#include<stdio.h>
int fib(int a)
{
    if(a==1)
        return 1;
    if(a==2)
        return 2;
    return fib(a-1)+fib(a-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        printf("%u\n",fib(n));
    }
    return 0;
}
