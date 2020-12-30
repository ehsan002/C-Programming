#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        long i=0;
        char s[100];
        while(n!=0)
        {
            int m=n%2;
            s[i]=m+48;
            int r=n/2;
            n=r;
            i++;
        }
        s[i]='\0';
        long len=strlen(s),k=0,j;
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
        for(i=0;i<len;i++)
        {
            if(s[i]=='1')
                k++;
        }
        printf("The parity of %s is %ld (mod 2).\n",s,k);
    }
    return 0;
}
