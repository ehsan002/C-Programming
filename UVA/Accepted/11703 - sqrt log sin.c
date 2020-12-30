#include<stdio.h>
#include<math.h>
int main()
{
    long x[1000010];
    x[0]=1;
    long i,n;
    for(i=1;i<=1000000;i++)
        {
            long m=i-sqrt(i), n= log(i), o= i*(sin(i)*sin(i));
            x[i]=(x[m]+x[n]+x[o])%1000000;
        }

    while(scanf("%ld",&n)==1)
    {
        if(n==-1)
            break;

        printf("%ld\n",x[n]);
    }
    return 0;
}
