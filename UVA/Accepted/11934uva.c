#include<stdio.h>
int main()
{
    int a,b,c,d,l,sum,t,i;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        t=0;
        if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(l==0))
            break;
        for(i=0;i<=l;i++)
        {
            sum=a*i*i+b*i+c;
            if(sum%d==0)
                t++;
        }
        printf("%d\n",t);
    }
}
