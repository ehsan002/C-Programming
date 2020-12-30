#include<stdio.h>
int main()
{
    int h,m;
    while(scanf("%d %d",&h,&m)==2)
    {
        if(h==0&&m==0)
            break;
        int angh=h*30;
        int angm=m*6;
        int ang=abs(angh-angm);
        if(ang>180)
            ang=360-ang;
        printf("%d.000\n",ang);
    }
    return 0;
}
