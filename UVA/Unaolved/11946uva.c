#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char s[10000];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);//gets(s);
        int len=strlen(s);
        for(j=0;j<len;j++)
        {
            if(s[j]=='0')
                s[j]='O';
            if(s[j]=='1')
                s[j]='I';
            if(s[j]=='2')
                s[j]='Z';
            if(s[j]=='3')
                s[j]='E';
            if(s[j]=='4')
                s[j]='A';
            if(s[j]=='5')
                s[j]='S';
            if(s[j]=='6')
                s[j]='G';
            if(s[j]=='7')
                s[j]='T';
            if(s[j]=='8')
                s[j]='B';
            if(s[j]=='9')
                s[j]='P';
        }
    }
    puts(s);
    return 0;
}
