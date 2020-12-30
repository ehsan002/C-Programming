#include<stdio.h>
#include<math.h>

long digit[10000101],n,i;

void digitCounting()
{
    double sum=0.0;
    for(i=1;i<10000001;i++)
    {
        sum+=log10((double)i);
        digit[i]=ceil(sum);
    }

    digit[1]=1;
}

int main()
{
    digitCounting();
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        printf("%ld\n",digit[n]);
    }
    return 0;
}
