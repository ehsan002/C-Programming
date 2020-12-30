#include<stdio.h>
int main()
{
    int a,b,amnt,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&amnt);
        int sum=a+b;
        int avg=sum/3;
        a=a-avg;
        b=b-avg;
        sum=a+b;
        a=(a*amnt)/sum;
        printf("%d\n",a);
    }
    return 0;
}
