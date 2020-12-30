#include<stdio.h>
#include<math.h>
int main()
{
    int c,test=1;
    double s,u,v,t,a;
    while(scanf("%d",&c)==1)
    {
        if(c==0)
            break;
        else
            scanf("%lf %lf %lf",&u,&v,&t);
        if(c==1)
        {
            a=(float)(v-u)/t;
            s=(float)(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",test,s,a);
        }

        if(c==2)
        {
            a=t;
            t=(float)(v-u)/a;
            s=(float)(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",test,s,t);
        }

        if(c==3)
        {
            s=t;
            a=v;
            v=sqrt(u*u+2*a*s);
            t=(float)(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",test,v,t);
        }

        if(c==4)
        {
            s=t;
            a=v;
            v=u;
            u=sqrt(v*v-2*a*s);
            t=(float)(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",test,u,t);
        }
        test++;
    }
    return 0;
}
