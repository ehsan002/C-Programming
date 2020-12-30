#include<stdio.h>
int main()
{
    long long a,b,l,sum,i;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        sum=b;
        i=1;
        //l=a;
        while(sum<=(a*i))
        {
            printf("%lld",sum);
            sum+=(a+1);
//            if(sum<=l)
//            {
//                printf("#");
//            }
            i++;
//            b*=i;

        }
        printf("\n");
    }
    return 0;
}
