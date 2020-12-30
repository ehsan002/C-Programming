#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000000],s2[1000000];
    int i,j;
    while(scanf("%s %s",s1,s2)==2)
    {
        int cnt=0,len1=strlen(s1),len2=strlen(s2);
        j=0;
        for(i=0;i<len1;i++)
        {
            for(j=j;j<len2;j++)
            {
                if(s1[i]==s2[j])
                {
                    cnt++;
                    j++;
                    break;
                }
            }
        }
        if(cnt==len1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
