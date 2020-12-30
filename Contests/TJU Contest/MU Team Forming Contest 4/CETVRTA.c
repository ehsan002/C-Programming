#include<stdio.h>
int main()
{
    int x1,x2,x3,x,y1,y2,y3,y;
    while(scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        if(x1==x2)
        {
            x=x3;
        }

        if(x1==x3)
        {
            x=x2;
        }

        if(x2==x3)
        {
            x=x1;
        }

        if(y1==y2)
            y=y3;

        if(y1==y3)
            y=y2;
        if(y3==y2)
            y=y1;

        printf("%d %d\n",x,y);
    }
    return 0;
}
