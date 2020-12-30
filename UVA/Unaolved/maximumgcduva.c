#include<stdio.h>
int main()
{
    long n,a[200],i,j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        int j=0;
        while(scanf("%ld",&a[j])!='\n')
        {
            j++;
        }
        printf("%d",j);
    }
}
