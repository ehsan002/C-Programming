#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int i;
    while(scanf("%s",s)==1)
    {
        if(s[0]=='0')
            break;
            int len=strlen(s),sum=0;
            for(i=0;i<len;i++)
            {
                sum+=s[i]-48;
            }
            s[0]='\0';
            if(sum<10){
                printf("%d\n",sum);
            }
            else{
                int sumn=sum/10+sum%10;
                printf("%d\n",sumn);
            }
    }
    return 0;
}
