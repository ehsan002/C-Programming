#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int a[100];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int min=400;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int dif=abs(a[i]-a[j]);
                if(dif<min)
                    min=dif;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
