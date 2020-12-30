#include<stdio.h>
int main()
{
    long m,n,i,j;
    while(scanf("%ld %ld",&m,&n)==2)
    {
        long a[5000],b[200000],total=0;

        for(i=0;i<m;i++)
            scanf("%ld",&a[i]);

        for(i=0,j=0;i<n;i++)
        {
            scanf("%ld",&b[i]);
            if(m==0)
            {
                continue;
            }
            for(j=0;j<m;j++)
            {
                if(b[i]==a[j])
                {
                    total++;
                    a[j]=a[m-1];
                    m--;
                }
            }
        }

        printf("%ld\n",total);
    }
    return 0;
}
