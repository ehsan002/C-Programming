#include<stdio.h>

int main()
{
    long long n,r,a[80000];
    while(scanf("%lld %lld",&n,&r)==2)
    {
        long long i,j,k;
        double sum=1.00;

        long long tmp;
        if(r>(n-r))
            tmp=n-r;
        else
            tmp=r;
        for(i=n,j=tmp;j>=1;i--,j--)
        {
            double t=(double)i/(double)j;
            sum=sum*t;
        }

        long long l=0;
        double f=sum;
        while((long long)(f)%2==0)
        {
            a[l]=2;
            l++;
            f/=2;
        }

        for(i=3;i<sqrt(f);i+=2)
        {
            while((long long)(f)%i==0)
            {
                a[l]=i;
                l++;
                f/=i;
            }
        }

        if(f>2)
        {
            a[l]=f;
            l++;
        }
        printf("%lldC%lld = ",n,r);
        for(i=0;i<l;i++)
        {
            printf("%lld",a[i]);
            if(i<l-1)
                printf(" * ");
            else
                printf("\n");
        }
    }
    return 0;
}
