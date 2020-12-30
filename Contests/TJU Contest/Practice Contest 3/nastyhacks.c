#include<stdio.h>
int main()
{
    long n,a,b,c,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(b-a>c)
        {
            printf("advertise\n");
            continue;
        }
        if(b-a<c)
        {
            printf("do not advertise\n");
            continue;
        }
        else
            printf("does not matter\n");
    }
    return 0;
}
