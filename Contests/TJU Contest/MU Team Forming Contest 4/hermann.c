#include<stdio.h>
int main()
{
    double n;
    while(scanf("%lf",&n)==1)
    {
        double area=acos(-1)*n*n;
        double area2=2*n*n;
        printf("%.6lf\n%.6lf\n",area,area2);
    }
    return 0;
}
