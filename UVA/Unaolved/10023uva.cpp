#include<stdio.h>
#include<math.h>
int main()
{
    long double x,y;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&x);
        y=sqrtl(x);
        printf("%.Lf\n\n",y);
    }
    return 0;
}
