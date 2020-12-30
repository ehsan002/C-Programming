#include<stdio.h>
int main()
{
    int t,l,w,h,i;
    float g=9.80665;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;
        int v_max=0,v=0;
        float f_max=0.0,f=0.0;
        for(i=0;i<t;i++)
        {
            scanf("%d %d %d",&l,&w,&h);
            f=g-(g/(2.0*(float)h));
            v=l*w*h;
            if(f>f_max)
            {
                f_max=f;
                v_max=v;
            }
            if(f==f_max)
            {
                if(v>=v_max)
                    v_max=v;
            }
        }
        printf("%d\n",v_max);
    }
    return 0;
}
