#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i;
        long sum=0;
        if(n==0)
            break;
        for(i=0;i<=n;i++)
        {
            sum+=i*i;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
