#include<stdio.h>
long a[100];
int main()
{
    long n,i,j,t,k,avg;
    scanf("%ld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%ld",&n);
        long sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            sum+=a[i];
        }
        if(sum%4==0)
            avg=sum/4;
        else
        {
            printf("no\n");
            continue;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        long test=a[n-1],temp=0;
        for(i=0,j=n-1;i<j;)
        {
            if(test>avg)
            {
                temp=0;
                break;
            }
            if(test==avg)
            {
                temp=1;
                j--;
                test=a[j];
            }
            else
            {
                test=a[i]+test;
                i++;
            }
        }
        if(temp==1)
            printf("yes\n");
        else
            printf("no\n");
        for(i=0;i<n;i++)
            a[i]=0;
    }
    return 0;
}
