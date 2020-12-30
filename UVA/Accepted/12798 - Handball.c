#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,a[110][110],i,j,res[110];
    while(scanf("%d %d",&m,&n)==2)
    {
        memset(a,0,sizeof(a));
        memset(res,0,sizeof(res));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]==0)
                {
                    res[i]=1;
                }
            }
        }
        int count=0;
        for(i=0;i<m;i++)
        {
            if(res[i]==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
