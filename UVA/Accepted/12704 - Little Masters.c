#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,x,y,r;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&r);
        float d=sqrt((x*x)+(y*y));
        float max= d+(float)r;
        float min= r-(float)d;
        printf("%.2f %.2f\n",min,max);
    }

    return 0;
}
