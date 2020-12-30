#include<stdio.h>

int main()
{
    long n;
    while(scanf("%ld",&n)==1&&n!=0)
    {
        if(n<101)
            printf("f91(%ld) = 91\n",n);
        else
            printf("f91(%ld) = %ld\n",n,n-10);
    }
    return 0;
}
