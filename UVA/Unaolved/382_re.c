#include<stdio.h>

int main()
{
    long i,n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        long sum=0;

        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }

        if(sum==n)
            printf("%5ld  PERFECT\n",n);
        if(sum>n)
            printf("%5ld  ABUNDANT\n",n);
        if(sum<n)
            printf("%5ld  DEFICIENT\n",n);

    }
    return 0;
}
