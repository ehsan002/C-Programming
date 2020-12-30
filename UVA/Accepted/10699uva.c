#include<stdio.h>
#include<string.h>
#include<math.h>

int array[1000100],i,j;

void siv()
{
    long n=1000000;
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
    while(scanf("%ld",&n)==1&&n!=0)
    {
        int cnt=0,sq=sqrt(n);
        for(i=2;i<=n;i++)
        {
            if(n%i==0&&array[i]==0)
                cnt++;
        }
        printf("%ld : %d\n",n,cnt);
    }
    return 0;
}
