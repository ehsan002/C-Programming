#include<stdio.h>
int main()
{
    int n,ans,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int d=0;
        while(n>=3)
        {
            ans=n/3;
            d=d+ans;
            n=ans+n%3;
        }
        if(n==2)
            d=d+1;
        printf("%d\n",d);
    }
    return 0;
}
