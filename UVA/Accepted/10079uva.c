#include<stdio.h>
int main()
{
    long n,ans;
    while(scanf("%ld",&n)==1)
    {
        if(n<0)
            break;
        ans=((n*(n+1))/2)+1;
        printf("%ld\n",ans);
    }
    return 0;
}
