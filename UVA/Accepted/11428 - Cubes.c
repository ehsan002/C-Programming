#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,i,j;
    while(scanf("%d",&n)==1)
    {
        int temp=0;
        if(n==0)
            break;

        int t1,t2=n;

        if(n==1)
        {
            t1=1,t2=0;
            temp=1;
        }

        int s=sqrt(n);

        for(i=1;i<=s;i++)
        {
            for(j=0;j<=i;j++)
            {
                if((i*i*i)-(j*j*j)==n)
                {
                    if(j<t2)
                        t1=i,t2=j;
                    temp=1;
                }
            }
        }
        if(temp==0)
            printf("No solution\n");
        else
            printf("%d %d\n",t1,t2);
    }
    return 0;
}
