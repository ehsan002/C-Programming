#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,y,rx[100],ry[100],r[100],yx[15],yy[15],i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&y);
        for(j=0;j<n;j++)
            scanf("%d %d %d",&rx[j],&ry[j],&r[j]);
        for(j=0;j<y;j++)
            scanf("%d %d",&yx[j],&yy[j]);

        printf("Case %d:\n",i);

        for(j=0;j<y;j++)
        {
            int ch=0;
            for(k=0;k<n;k++)
            {
                double distance =(double)((rx[k]-yx[j])*(rx[k]-yx[j]))+((ry[k]-yy[j])*(ry[k]-yy[j]));
                distance = sqrt(distance);
                if(distance<=r[k])
                    {
                        ch=1;
                        break;
                    }
            }
            if(ch==1)
            {
                printf("Yes\n");
            }

            else
                printf("No\n");
        }
    }

    return 0;
}
