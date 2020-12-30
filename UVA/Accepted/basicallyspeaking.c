#include<stdio.h>
#include<math.h>
#include<string.h>

char result[100];
int i=0,j,k;

long dec(char s[100],int n)
{
    int len=strlen(s);
    long sum = 0;
    for(i=0,j=len-1;j>=0;i++,j--)
    {
        if(s[j]>='A'&&s[j]<='F')
            k=s[j]-55;
        else
            k=s[j]-'0';
        sum=sum+(k*pow(n,i));

    }
    return sum;
}

void convert(int n,int m)
{
    i=0;
    if(n==0)
    {
        result[i]='0';
        i++;
    }

    while(n>0)
    {
        if(n%m<10)
            result[i]=(n%m)+48;
        else
            result[i]=(n%m)+55;
        n/=m;
        i++;
    }

    if(i<7)
        for(j=i;j<7;j++)
            result[j]=' ';

    if(i>7)
        return;

    for(j=0,k=6;j<3;j++,k--)
    {
        char t=result[j];
        result[j]=result[k];
        result[k]=t;
    }
}

int main()
{
    char s[100];
    int a,b;
    while(scanf("%s %d %d",s,&a,&b)==3)
    {
        long sum=dec(s,a);
        convert(sum,b);

        if(i>7)
            printf("  ERROR\n");
        else
            puts(result);
        memset(s,'\0',sizeof(s));
        memset(result,'\0',sizeof(result));
    }
    return 0;
}
