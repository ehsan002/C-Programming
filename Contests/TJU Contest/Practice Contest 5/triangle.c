#include<stdio.h>
int main()
{
    double x[70000],y[70000],n;
    while(scanf("%lf",&n)==1)
    {
        double max=0.00,area=0.00;
        long i,j,k;
        if(n==-1)
            break;
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf",&x[i],&y[i]);
        }
        for(i=1;i<=n-2;i++)
        {
            for(j=i+1;j<=n-1;j++)
            {
                for(k=j+1;k<=n;k++)
                {
                    area=0.5*(((y[k]-y[i])*(x[j]-x[i]))-((y[j]-y[i])*(x[k]-x[i])));
                    if(area<0)
                        area=area*(-1);
                    if(area>max)
                        max=area;
                }
            }
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
