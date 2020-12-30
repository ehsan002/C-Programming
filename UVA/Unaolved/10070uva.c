
#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(n%4==0)
        {
            if(n%400==0)
            {
                printf("This is leap year.\n");
            }
            else if(n%100!=0)
            {
                printf("This is leap year.\n");
            }
        }
        if(n%15==0)
            printf("This is huluculu festival year.\n");
        if(n%4==0)
        {
            if(n%400==0)
            {
                if(n%55==0)
                    printf("This is bulukulu festival year.\n");
            }
            else if(n%100!=0)
            {
                if(n%55==0)
                    printf("This is bulukulu festival year.\n");
            }
        }
        if(n%4!=0&&n%15!=0)
            printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;
}
