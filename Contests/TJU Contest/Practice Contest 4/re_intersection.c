#include<stdio.h>
int main()
{
    long m,n,k;
    while(scanf("%ld %ld",&m,&n)==2)
    {
        long a[5000],b[200000],total=0;
        long i=0,j=0;

        while(i<m||j<n)
        {
            if(i<m)
            {
                scanf("%ld",&a[i]);
                i++;
            }
            if(j<n)
            {
                scanf("%ld",&b[j]);
                j++;
            }
            for(k=0;k<i;k++)
            {
                if(b[j-1]==a[k])
                {
                    total++;
                    a[k]='\0';
                    break;
                }
            }
        }

        printf("%ld\n",total);
    }
    return 0;
}
