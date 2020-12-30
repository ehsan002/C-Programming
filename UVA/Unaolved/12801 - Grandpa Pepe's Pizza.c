#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,a[110],i,j;
    while(scanf("%d %d",&m,&n)==2)
    {
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[j]);
        }
        int t=0;
        for(i=i;i<n;i++)
        {
            if(i==n-1)
            {
                if(a[i]-a[0]>m)
                    t=1;
            }
            if(a[i]-a[i-1]>m)
                    t=1;
        }
        if(t==1)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;
}
