#include<stdio.h>

long fct(long n)
{
    int result=1,i;
    for(i=1;i<=n;i++)
        result*=i;
    return result;
}

int main()
{
    double i,sum=2.5;
    printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
    for(i=3;i<10;i++)
    {
        sum+=(1.0000/fct(i));
        printf("%.lf %.9lf\n",i,sum);
    }
    return 0;
}
