#include<stdio.h>
int main()
{
    long t,i,n,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        int cnt=0,t=0,max=0;
        scanf("%ld",&n);
        for(j=100;j>0;j--)
        {
            if(n==(j*j))
            {
                t=1;
                break;
            }

            if(n>(j*j))
            {
                if((n+1)==(j*j))
                    t=2;
                else
                    max=j;
                break;
            }
        }

        if(t==1)
        {
            printf("1\n");
            continue;
        }

        if(t==1)
        {
            printf("2\n");
            continue;
        }

        long min=n;
        for(j=max;j>0;j--)
        {
            long temp=n,cnt=0,k;
            for(k=j;k>0;k--)
            {
                if(temp>=(k*k))
                {
                    temp-=(k*k);
                    k++;
                    cnt++;
                }
                if(temp==0)
                    break;
            }
            if(cnt<min)
                min=cnt;
        }

        printf("%ld\n",min);
    }
    return 0;
}
