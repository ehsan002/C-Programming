#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool a[1000000];
    memset(a,1,sizeof(a));
    int n=1000000,i,j;
    int s=sqrt(n),c=0;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=s;j++)
        {
            if(a[i]==1&&(i*j<=n))
            {
                a[i*j]=0;
                c++;
            }
        }
    }
    long prime[70000];
    for(i=2,j=0;j<(n-c+1);i++)
    {
        if(a[i]==1)
        {
            prime[j]=i;
            j++;
        }
    }
    long long m;
    while(scanf("%lld",&m)==1)
    {
        if(m==0)
            break;

        if(a[m]==1)
        {
            printf("-1\n");
            continue;
        }
        long long large=2;
        s=sqrt(m);
        for(i=0;prime[i]<=s;i++)
        {
            if(m%prime[i]==0)
            {
                if(a[m/prime[i]]==1)
                {
                    large=m/prime[i];
                }
                else
                    large=prime[i];
            }
        }

        printf("%lld\n",large);

    }

    return 0;
}
