#include<stdio.h>
int main()
{
    int n,l,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&l);
        double w=(double)(l*3)/5;
        double r=(double)l/5;
        double t_area=l*w;
        double c_area=acos(-1)*r*r;
        double area=t_area-c_area;
        printf("%.2lf %.2lf\n",c_area,area);
    }
    return 0;
}
