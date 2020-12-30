#include<stdio.h>
double ncr(int x,int y)
{
    double sum=1.000;
    int i,j;
    if(x==y||y==0)
        return 1;
    else
    {
        long tmp;
        if(y>(x-y))
            tmp=x-y;
        else
            tmp=y;
        for(i=x,j=tmp;j>=1;i--,j--)
        {
            double t=(double)i/(double)j;
            sum=sum*t;
        }
    }
    return sum;
}
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        long long c=ncr(n,k);
        long long temp=c;
        long long i;
        if(c==1)
        {
            printf("1\n");
            continue;
        }
        long long total=2;
        for(i=2;i<temp;i++)
        {
            if(c%i==0)
            {
                total=total+2;
                temp=c/i;
                if(i==temp)
                {
                    total--;
                    break;
                }
            }
        }
        printf("%lld %lld\n",c,total);
    }
    return 0;
}
