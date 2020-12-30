#include<stdio.h>
#include<math.h>
int main()
{
    long long n,p,m;
    while(scanf("%lld %lld %lld",&n,&p,&m)==3)
    {
        long long ans=1;
        while(p>0)
        {
            if(p%2==1)
                ans=(ans*n);
            ans=ans%m;
            n=(n*n);
            n=n%m;
            p=p/2;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
