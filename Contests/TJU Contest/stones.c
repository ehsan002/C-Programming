#include<stdio.h>
int main()
{
    long t,n,a[150000],i,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        long sum=0;
        scanf("%ld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
                sum+=a[j];
            else
                sum+=a[j+1];
            a[j+1]=a[j]+a[j+1];
        }
        printf("%ld\n",sum);
    }
    return 0;
}
