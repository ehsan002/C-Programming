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
    for(i=0;i<100;i++)
        if(array[i]==0)
            printf("%d ",i);
    return 0;
}
