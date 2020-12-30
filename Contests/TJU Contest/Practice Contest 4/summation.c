#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        char s1[100],s2[100];
        scanf("%s %s",s1,s2);
        long j,k,len1=strlen(s1),len2=strlen(s2),sum1=0,sum2=0;
        for(j=len1-1,k=len1-1;j>=0;j--,k--)
        {
            sum1+=(s1[k]-48)*pow(10,j);
        }

        for(j=len2-1,k=len2-1;j>=0;j--,k--)
        {
            sum2+=(s2[k]-48)*pow(10,j);
        }
        int sum=sum1+sum2;
        printf("%ld\n\n",sum);
    }
    return 0;
}
