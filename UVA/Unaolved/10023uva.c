#include<stdio.h>
#include<math.h>
int main()
{
    long double x,y;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%Lf",&x);
        y=sqrtl(x);
        y=ceil(y);
        printf("%.Lf\n",y);
        if(i<t-1)
            printf("\n");
    }
    return 0;
}
