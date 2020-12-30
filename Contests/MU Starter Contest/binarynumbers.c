#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,s[25],s1[25];
    long n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        int j=0;
        while(n!=0)
        {
            int m=n%2;
            s[j]=m;
            int r=n/2;
            n=r;
            j++;
        }
        int len=j;
        int k=0;
        for(j=0;j<len;j++)
        {
            if(s[j]==1){
                s1[k]=j;
                k++;
            }
        }
        len=k;
        for(j=0;j<len;j++){
            printf("%d",s1[j]);
            if(j==len-1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
