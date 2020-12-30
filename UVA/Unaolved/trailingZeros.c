#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        while(n)
        {
            sum+=(n/5);
            n/=5;
        }
        printf("%d\n",sum);
    }
}
