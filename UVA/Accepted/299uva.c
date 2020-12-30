#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,l,test;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&test);
        for(l=0;l<test;l++)
            scanf("%d",&a[l]);
        int swap=0;

        for(k=0;k<test;k++)
        {
            for(j=0;j<test-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    swap++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",swap);
    }
    return 0;
}
