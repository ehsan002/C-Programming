#include<stdio.h>
#include<math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3;
    double pi=3.141592653589793;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        double a1=(x1-x2),b1=(y1-y2);
        double a2=(x2-x3),b2=(y2-y3);
        double c1=((x2*x2)-(x1*x1)+(y2*y2)-(y1*y1))/2;
        double c2=((x3*x3)-(x2*x2)+(y3*y3)-(y2*y2))/2;
        double g=(c1*b2-b1*c2)/(a1*b2-b1*a2);
        double f=(a1*c2-c1*a2)/(a1*b2-b1*a2);
        double c=-(2*g*x1)-(2*f*y1)-(x1*x1)-(y1*y1);
        double r=sqrt((g*g)+(f*f)-c);
        double poridhi=2*pi*r;
        printf("%.2lf\n",poridhi);
    }
    return 0;
}
