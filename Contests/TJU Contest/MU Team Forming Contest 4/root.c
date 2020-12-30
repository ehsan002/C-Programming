#include<stdio.h>
#include<math.h>
int main()
{
    long long n,a,b,i;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        if(b==1){
            printf("%lld\n",a);
            continue;
        }
        for(i=1;i++;)
        {
            long long sum=pow(i,b);
            if(sum>=a)
            {
                long long sum2=pow((i-1),b);
                if((sum-a)>(a-sum2))
                    n=i-1;
                else
                    n=i;
                break;
            }
        }
        printf("%lld\n",n);
    }
    return 0;
}
