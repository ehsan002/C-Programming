#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1010],s2[1010];
    while(scanf("%s %s",s1,s2)==2)
    {
        if(s1[0]=='0'&&s2[0]=='0')
            break;
        if(s2[0]=='0')
        {
            printf("1\n");
            continue;
        }
        int len1=strlen(s1),len2=strlen(s2);
        if(s1[len1-1]=='0'||s1[len1-1]=='1'||s1[len1-1]=='5'||s1[len1-1]=='6')
        {
            printf("%c\n",s1[len1-1]);
            continue;
        }

        if(s1[len1-1]=='4'||s1[len1-1]=='9')
        {
            if((s2[len2-1]-48)%2==1)
                 printf("%c\n",s1[len1-1]);
            else if(s1[len1-1]=='4')
                printf("6\n");
            else
                printf("1\n");
            continue;
        }
        int t;
        if(len2>1)
            t=s2[len2-1]+(s2[len2-2]*10);
        else
            t=s2[len2-1];

        if(t%4==1)
        {
            printf("%c\n",s1[len1-1]);
            continue;
        }
        if(t%4==2)
        {
            if(s1[len1-1]=='2')
                printf("4\n");
            else if(s1[len1-1]=='7')
                printf("9\n");
            else if(s1[len1-1]=='3')
                printf("9\n");
            else
                printf("4\n");
            continue;
        }

        if(t%4==3)
        {
            if(s1[len1-1]=='2')
                printf("8\n");
            else if(s1[len1-1]=='7')
                printf("3\n");
            else if(s1[len1-1]=='3')
                printf("7\n");
            else
                printf("2\n");
            continue;
        }

        if(t%4==0)
        {
            if(s1[len1-1]=='2')
                printf("6\n");
            else if(s1[len1-1]=='3')
                printf("1\n");
            else if(s1[len1-1]=='7')
                printf("1\n");
            else
                printf("6\n");
        }
    }
    return 0;
}
