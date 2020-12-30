#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        long a[1000],sum=0;
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            sum+=a[i];
        }
        long avg=sum/n;
        printf("%ld\n",avg);
    }
    return 0;
}
