#include<stdio.h>
#include<math.h>

int array[1000100],i,j;

void siv()
{
    int n=1000000;
    int sq=sqrt(n);
    memset(array,0,sizeof(array));
    array[1]=1;
    for(i=4;i<=n;i+=2)
    {
        array[i]=1;
    }
    for(i=3;i<sq;i++)
    {
        if(array[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
                array[j]=1;
        }
    }
}

int main()
{
    siv();
    long n;
    while(scanf("%ld",&n)==1)
    {
        long cnt=0;
        if(n==0)
            break;
        if(array[n]==0)
        {
            printf("%ld : 1\n",n);
            continue;
        }
        int sqr=sqrt(n);
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                if(array[i]==0)
                    cnt++;
            }
        }
        printf("%ld : %ld\n",n,cnt);
    }
    return 0;
}
