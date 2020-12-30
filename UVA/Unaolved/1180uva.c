#include<stdio.h>
int main()
{
    long long t,i,j,n;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n==1||n==0)
        {
            printf("No\n");
            continue;
        }
        long long sum=1;
        for(j=1;j<n;j++)
        {
            sum*=2;
        }
        sum=sum*((2*sum)-1);
        long long sum2=1;
        for(j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
                if((sum/j)!=j)
                    sum2=sum2+j+(sum/j);
                else
                    sum2=sum2+j;
            }
        }
        if(sum2==sum)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
