#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,a[10000],i=0,j;
    while(scanf("%d",&n)==1)
    {
        a[i]=n;
        i++;
        qsort(a, i, sizeof(int), cmpfunc);
        if(i%2!=0)
            printf("%d\n",a[i/2]);
        else
        {
            printf("%d\n",(a[i/2]+a[(i/2)-1])/2);
        }
    }
    return 0;
}
