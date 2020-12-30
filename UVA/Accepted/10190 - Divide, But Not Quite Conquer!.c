#include<stdio.h>
int main()
{
    double m,n,a[100000];
    long i,temp,j;
    while(scanf("%lf %lf",&m,&n)==2)
    {
        i=1,temp=0;
        a[0]=m;
        if(n==0||n==1)
        {
            printf("Boring!\n");
            continue;
        }
        while(m/n!=1)
        {
            if(m/n<1)
            {
                temp=1;
                break;
            }
            a[i]=m/n;
            m/=n;
            i++;
        }
        a[i]=1;

        if(temp==1)
            printf("Boring!\n");
        else
        {

            for(j=0;j<=i;j++)
            {
                printf("%.lf",a[j]);
                if(j==i)
                    printf("\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;
}
