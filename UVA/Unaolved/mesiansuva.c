#include<stdio.h>
#include<math.h>
int main()
{
    double m1,m2,m3;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3)
    {
        double sm=(m1+m2+m3)/2;
        double area=sqrt(sm*(sm-m1)*(sm-m2)*(sm-m3));
        area=(4.0*area)/3.0;
        if(area<=0)
        {
            printf("-1.000\n");
            continue;
        }
        printf("%.3lf\n",area);
    }
    return 0;
}
