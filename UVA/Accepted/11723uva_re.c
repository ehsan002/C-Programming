#include<stdio.h>
int main()
{
    int r,n,test=1;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(n==0)
            break;
        int ans=r/n;
        if(r%n==0)
            ans=ans-1;
        if(ans>26||r==0)
            printf("Case %d: impossible\n",test);
        else if(ans<=26)
            printf("Case %d: %d\n",test,ans);


        test++;
    }
    return 0;
}
