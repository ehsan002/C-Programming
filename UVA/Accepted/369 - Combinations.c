#include<stdio.h>
int main()
{
    long n,r;
    while(scanf("%ld %ld",&n,&r)==2)
    {
        if(n==0&&r==0)
            break;

        long i,j;
        double sum=1.00;

        if(n==r)
            printf("%ld things taken %ld at a time is 1 exactly.\n",n,r);
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
            printf("%ld things taken %d at a time is %.lf exactly.\n",n,r,sum);
        }
    }
    return 0;
}
