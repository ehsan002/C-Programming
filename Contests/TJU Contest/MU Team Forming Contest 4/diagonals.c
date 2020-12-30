#include<stdio.h>
int main()
{
    long long n,m,i,j,k,a[50000];
    while(scanf("%lld %lld",&n,&m)==2)
    {
        for(i=m,j=0;(j<=n-(m%n))&&(i<=n*n);i+=n+1,j++)
        {
            a[j]=i;
            if(m%n==0)
            {
                j++;break;
            }
        }
        for(k=0;k<j;k++)
        {
            printf("%lld",a[k]);
            if(k<j-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
