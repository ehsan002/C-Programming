#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    int t=0;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        t++;
        if(a==0&&b==0&&c==0)
            break;
        if(a==-1)
        {
            a=sqrt(c*c-b*b);
            if(c<a||c<b)
                printf("Triangle #%d\nImpossible.\n\n",t);
            else
                printf("Triangle #%d\na = %.3lf\n\n",t,a);
        }
        if(b==-1)
        {
            b=sqrt(c*c-a*a);
            if(c<a||c<b)
                printf("Triangle #%d\nImpossible.\n\n",t);
            else
                printf("Triangle #%d\nb = %.3lf\n\n",t,b);
        }
        if(c==-1)
        {
            c=sqrt(a*a+b*b);
            if(c<a||c<b)
                printf("Triangle #%d\nImpossible.\n\n",t);
            else
                printf("Triangle #%d\nc = %.3lf\n\n",t,c);
        }
    }
    return 0;
}
