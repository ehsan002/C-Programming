#include<stdio.h>
#include<math.h>
int main()
{
    char s[1000],s1[1000];
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%s",s);
        int len=strlen(s),i,j,sum=0;
        for(j=0,i=len-1;i>=0;j++,i--)
        {
            sum+=(s[j]-48)*pow(2,i);
        }
        int n=sum;
        j=0;
        while(n!=0)
        {
            int m=n%8;
            s1[j]=m+48;
            int r=n/8;
            n=r;
            j++;
        }
        s1[j]='\0';
        len=strlen(s1);
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            char t=s1[i];
            s1[i]=s1[j];
            s1[j]=t;
        }
        puts(s1);
    }
    return 0;
}
