#include<stdio.h>
#include<string.h>

void str_rev(char s[])
{
    int len=strlen(s),i,temp,j;
    for(i=0,j=len-1;i<=(len-1)/2;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}

int main()
{
    char s1[100],s2[100],s3[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s1);
        strcpy(s3,s1);
        str_rev(s3);
        int iter=0;
        while(strcmp(s1,s3)!=0)
        {
            memset(s2,'\0',sizeof(s2));
            int carry=0,sum=0,len=strlen(s1),j,k;
            for(j=0,k=len-1;j<len;j++,k--)
            {
                int sum=(s1[j]-48+s1[k]-48+carry);
                if(sum>9)
                {
                    s2[j]=(sum%10)+48;
                    carry=1;
                }
                else
                {
                    s2[j]=sum+48;
                    carry=0;
                }
            }
            if(carry==1)
                s2[j]='1';

            memset(s1,'\0',sizeof(s1));
            memset(s3,'\0',sizeof(s3));
            strcpy(s3,s2);
            str_rev(s2);
            strcpy(s1,s2);
            iter++;

        }

        printf("%d %s\n",iter,s1);
    }
    return 0;
}
