#include<stdio.h>
int main()
{
    long t,d,n,a[100000],i,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&d,&n);
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
        }
        long max=0,min=1000000;
        for(j=0;j<n;j++)
        {
            /*if(a[j]>d)
            {
                long tmp=a[j];
                a[j]=d;
                d=t;
            }*/
            long t=d-a[j];
            if(t>max)
                max=t;
            if(a[j]>d/2)
            {
                if(t<min)
                    min=t;
            }
            else
            {
                if(a[j]<min)

            }
            if(t<min)
                min=t;
        }
        printf("%ld %ld",min,max);
    }
    return 0;
}
