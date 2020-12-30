#include<stdio.h>
int main()
{
    int n,i,j,a[101],size;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&size);
        for(j=0;j<size;j++)
            scanf("%d",&a[j]);
        int max=a[0];
        for(j=1;j<size;j++)
        {
            if(a[j]>max)
                max=a[j];
        }
        printf("Case %d: %d\n",i+1,max);
    }
    return 0;
}
