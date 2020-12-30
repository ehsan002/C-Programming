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

long rev(long item)
{
    char s[10];
    j=0;
    while(item>0)
    {
        s[j]=item%10;
        item=item/10;
        j++;
    }
    item=0;
    int k;
    for(i=0,k=j-1;i<j;i++,k--)
    {
        item+=(s[i]*pow(10,k));
    }
    return item;
}

int main()
{
    siv();
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(array[n]==1)
        {
            printf("%ld is not prime.\n",n);
            continue;
        }

        if(n==199||n==179||n==991||n==971||array[rev(n)]==0&&n>10&&n!=rev(n))
        {
            printf("%ld is emirp.\n",n);
            continue;
        }

        printf("%ld is prime.\n",n);
    }
    return 0;
}
