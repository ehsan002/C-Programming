#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,x,y,mx,my;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        if(x1!=x2&&y1!=y2)
        {
            mx=(x1+x2)/2.00;
            my=(y1+y2)/2.00;
            x=(2.00*mx)-x3;
            y=(2.00*my)-y3;
        }

        else if(x1!=x3&&y1!=y3)
        {
            mx=(x1+x3)/2.00;
            my=(y1+y3)/2.00;
            x=(2.00*mx)-x2;
            y=(2.00*my)-y2;
        }

        else
        {
            mx=(x2+x3)/2.00;
            my=(y2+y3)/2.00;
            x=(2.00*mx)-x1;
            y=(2.00*my)-y1;
        }
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}
