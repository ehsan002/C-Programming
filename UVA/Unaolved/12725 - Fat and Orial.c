#include<stdio.h>
int main()
{
    int t,i,n,j,a[510],k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }

        int h=a[n/2],d=0;

        for(j=0;j<n;j++)
        {
            d+=(abs(h-a[j]));
        }
        printf("%d\n",d);
    }
    return 0;
}
