#include<stdio.h>
int main()
{
    double xmin[10000],xmax[10000],ymin[10000],ymax[10000];
    double n;
    long i,j,k;
    while(scanf("%lf",&n)==1)
    {
        long count=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf %lf %lf",&xmin[i],&xmax[i],&ymin[i],&ymax[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((xmin[k]>=xmin[j])&&(xmax[k]<=xmax[j])&&(ymin[k]>=ymin[j])&&(ymax[k]<=ymax[j]))
                {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
