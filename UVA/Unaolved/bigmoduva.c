#include<stdio.h>
int main()
{
    long n,p,m;
    while(scanf("%ld %ld %ld",&n,&p,&m)==3)
    {
        long ans=1;
        while(p>0)
        {
            if(p%2==1)
            {
                ans=(ans*n)%m;
            }
            n=(n*n)%m;
            p=floor(p/2);
        }
        printf("%ld\n",ans);
    }
    return 0;
}
