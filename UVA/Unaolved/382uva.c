#include<stdio.h>
#include<math.h>
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

        if(n==1)
        {
            printf("%5ld  DEFICIENT\n",n);
            continue;
        }
        long sum=0;
        long l=sqrt(n);
        for(i=2;i<=l;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(i!=(n/i))
                    sum+=(n/i);
            }
        }
        sum+=1;

        if(sum==n)
            printf("%5ld  PERFECT\n",n);
        if(sum>n)
            printf("%5ld  ABUNDANT\n",n);
        if(sum<n)
            printf("%5ld  DEFICIENT\n",n);

    }
    return 0;
}
