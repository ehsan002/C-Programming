#include<stdio.h>
int main()
{
    long long m,n,t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&m,&n);
        long long j=0,k=0;
        char b1[100],b2[100],b3[100],b4[100];
        memset(b1,'\0',sizeof(b1));
        memset(b2,'\0',sizeof(b2));
        memset(b3,'\0',sizeof(b3));
        memset(b4,'\0',sizeof(b4));
        while(m!=0)
        {
            b1[j]=(m%2)+48;
            m/=2;
            j++;
        }

        long long p,len1=j;
        j=0;
        while(n!=0)
        {
            b2[j]=(n%2)+48;
            n/=2;
            j++;
        }
        long long len2=j;
        printf("%ld\n",len2);

        for(j=len1;j<len2;j++)
            b1[j]='0';

        for(j=0;j<len2;j++)
        {

            if(b1[j]=='1'&&b2[j]=='1')
            {

                b3[j]='1';
                b4[j]='1';
            }
            if(b1[j]=='0'&&b2[j]=='0')
            {
                b3[j]='0',b4[j]='0';
            }
            if((b1[j]=='0'&&b2[j]=='1')||(b1[j]=='1'&&b2[j]=='0'))
            {
                b3[j]='0',b4[j]='1';
            }
        }

        double d1=0,d2=0;
        for(j=len2-1,p=len2-1;j>=0;j--,p--)
        {
            d1+=((double)(b3[j]-48)*(pow(2,(double)p)));
            d2+=((double)(b4[j]-48)*(pow(2,(double)p)));
        }
        printf("Case %lld: %.lf %.lf\n",i+1,d2,d1);
    }
    return 0;
}
