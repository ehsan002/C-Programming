#include<stdio.h>
int main()
{
    double d,r,t,dis,spd;
    int cse=1;
    while(scanf("%lf %lf %lf",&d,&r,&t)==3)
    {
        if(r==0.00)
            break;
        dis=3.1415927*d*r;
        dis/=12;
        dis/=5280;
        spd=(dis*3600)/t;
        printf("Trip #%d: %.2lf %.2lf\n",cse,dis,spd);
        cse++;
    }
    return 0;
}
