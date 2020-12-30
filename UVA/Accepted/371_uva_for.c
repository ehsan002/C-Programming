#include <stdio.h>
int main()
{
    long long i,j,l,m,max,value;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i==0&&j==0)
            break;

        max=0;

        if(i>j)
        {
            long long t=i;
            i=j;
            j=t;
        }

        for(l=i;l<=j;l++)
        {
            long long k=l;
            m=0;
            if(l==1)
                m=3;
            for(k=l;k!=1;)
            {
                if(k%2!=0)
                {
                    k=3*k+1;
                    m++;
                }
                else
                {
                    k=k/2;
                    m++;
                }
            }
            if(max<m){
                value=l;
                max=m;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,value,max);
    }
    return 0;
}
