#include<stdio.h>
#include<math.h>
#include<string.h>

char result[100];
int i=0,j,k;

long dec(char s[100])
{
    int len=strlen(s);
    long sum = 0;
    for(i=0,j=len-1;j>=0;i++,j--)
    {
        if(s[j]>='A'&&s[j]<='F')
            k=s[j]-55;
        else
            k=s[j]-'0';

        sum=sum+(k*pow(16,i));

    }

    return sum;
}

void convert(int n)
{
    i=0;
    if(n==0)
    {
        result[i]='0';
        i++;
    }

    while(n>0)
    {
        result[i]=(n%2)+48;
        n/=2;
        i++;
    }

    if(i<13)
        for(j=i;j<13;j++)
            result[j]='0';

    for(j=0,k=12;j<6;j++,k--)
    {
        char t=result[j];
        result[j]=result[k];
        result[k]=t;
    }
}

int main()
{
    char s1[100],s2[100],c,res1[100];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s %c %s",s1,&c,s2);
        long sum1=dec(s1),sum2=dec(s2),sum;

        if(c=='+')
            sum=sum1+sum2;
        else
            sum=sum1-sum2;

        convert(sum1);
        strcpy(res1,result);
        convert(sum2);

        printf("%s %c %s = %ld\n",res1,c,result,sum);

        memset(s1,'\0',sizeof(s1));
        memset(s2,'\0',sizeof(s2));
        memset(res1,'\0',sizeof(res1));
        memset(result,'\0',sizeof(result));
    }
    return 0;
}
