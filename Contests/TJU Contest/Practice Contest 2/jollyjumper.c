#include<stdio.h>
long a[3333],b[3333];
int main()
{
    long n,i;
    while(scanf("%ld",&n)==1)
    {
        if(n==1)
        {
            printf("Jolly\n");
            continue;
        }
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
            b[i]=0;
        }
        int t=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i]-a[i+1];
                b[t]=t;
            }
            else
            {
                t=a[i+1]-a[i];
                b[t]=t;
            }
        }
        t=0;
        for(i=1;i<n;i++)
        {
            if(b[i]==0)
            {
                t=0;
                break;
            }
            else
                t=1;
        }
        if(t==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
        for(i=0;i<n;i++){
            a[i]='\0';
            b[i]='\0';
        }
    }
    return 0;
}
/*9
4 3 1 -2 2 7 13 20 12 21*/
