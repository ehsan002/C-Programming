#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n],i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
            if(i==n-1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
