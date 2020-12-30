#include<stdio.h>
int main()
{
    long m,n,ans,i,j;
    while(scanf("%ld %ld",&m,&n)==2)
    {
        ans=0;
        if(m==0&&n==0)
            break;
        j=m;
        for(j=j;j<=n;j++)
        {
            for(i=1;i<=n;i++)
            {
                if(i*i==j)
                {
                    ans++;
                    break;
                }
            }
        }
        printf("%ld\n",ans);
    }
    return 0;
}
