#include<stdio.h>
#include<string.h>
int main()
{
    char s[110],s1[110];
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        getchar();
        gets(s);
        scanf("%s",s1);
        if(strcmp(s,s1)==0)
        {
            printf("Case %d: Yes\n",i+1);
        }
        else
        {
            int j,k,len=strlen(s),temp=0;
            for(j=0,k=0;k<len;j++,k++)
            {
                if(s[k]!=' ')
                {
                    if(s1[j]!=s[k])
                    {
                        temp=1;
                        break;
                    }

                }
                else
                {
                    j--;
                }
            }

            if(temp==0)
            {
                printf("Case %d: Output Format Error\n",i+1);
            }
            else
                printf("Case %d: Wrong Answer\n",i+1);
        }
    }

    return 0;
}
