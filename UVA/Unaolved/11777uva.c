#include<stdio.h>
#include<math.h>
int main()
{
    int t,a[3],t1,t2,f,at,i,j,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&a[0],&a[1],&a[2]);
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
        }
        int ct=ceil((a[1]+a[2])/2);
        int sum=ct+t1+t2+f+at;
        if(sum>=90)
            printf("Case %d: A\n",k+1);
        else if(sum>=80)
            printf("Case %d: B\n",k+1);
        else if(sum>=70)
            printf("Case %d: C\n",k+1);
        else if(sum>=60)
            printf("Case %d: D\n",k+1);
        else
            printf("Case %d: F\n",k+1);
    }
    return 0;
}
