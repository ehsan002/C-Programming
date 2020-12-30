#include<stdio.h>
int main()
{
    double r1,r2,h,p;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        double r=(p*(r1-r2))/h;
        r=r2+r;
        double a1=(acos(-1))*r2*r2;
        double a2=(acos(-1))*r*r;
        double v=(p*(a1+a2+sqrt(a1*a2)))/3;
        printf("Case %d: %lf\n",i+1,v);
    }
    return 0;
}
