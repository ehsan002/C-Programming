#include<stdio.h>
int main()
{
    long n,b,h,w;
    while(scanf("%ld %ld %ld %ld",&n,&b,&h,&w)==4)
    {
        long i,cost,a[20],j,min=b+1,sum=0;
        for(i=0;i<h;i++)
        {
            scanf("%ld",&cost);
            for(j=0;j<w;j++)
            {
                scanf("%ld",&a[j]);
                if(a[i]>=n)
                {
                    sum=n*cost;
                    if(min>sum)
                    {
                        min=sum;
                    }
                }
            }
        }
        if(min>b)
            printf("stay home\n");
        else
            printf("%ld\n",min);
    }
    return 0;
}
