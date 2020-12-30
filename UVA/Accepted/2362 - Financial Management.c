#include<stdio.h>
int main()
{
    float n,sum=0,avg;
    int i=0;
    while(scanf("%f",&n)==1)
    {
        sum+=n;
        i++;
        if(i%12==0)
            printf("$%.2f\n",sum/12);
    }
    return 0;
}
