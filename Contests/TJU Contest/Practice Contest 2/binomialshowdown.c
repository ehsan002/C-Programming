#include<stdio.h>
int main()
{
    long n,r;
    while(scanf("%ld %ld",&n,&r)==2)
    {
        long i,j,k;
        double sum=1.00;
        if(n==0&&r==0)
            break;
        if(n==r||r==0)
            printf("1\n");
        else
        {
            long tmp;
            if(r>(n-r))
                tmp=n-r;
            else
                tmp=r;
            for(i=n,j=tmp;j>=1;i--,j--)
            {
                double t=(double)i/(double)j;
                sum=sum*t;
            }
            printf("%.lf\n",sum);
        }
    }
    return 0;
}
