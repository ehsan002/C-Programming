#include <stdio.h>
int main()
{
    int t,n,a[10],b[10],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        long sum=0;
        for(j=0;j<n;j++)
            sum+=(a[j]*b[j]);
        printf("%ld\n",sum);
    }
    return 0;
}
