#include<stdio.h>
int main()
{
    long long int n=0,m,i,o,s,ans,sum=0;
    while(scanf("%lld%lld",&n,&m)==2&& m>0 && n>0)
    {

        printf("%lld %lld ",n,m);
        if(n>m)
        {
            n=0;
        }
        for(i=n; i<=m; i++)
        {
            ans=1;
            for(s=i; s!=1; )
            {

                if(s%2==0)
                    s=s/2;
                else
                    s=3*s+1;
                ans++;
            }
            if(ans>sum)
                sum=ans;
        }
        printf("%lld\n",sum);

    }
