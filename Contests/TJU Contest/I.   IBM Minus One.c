#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        int len=strlen(s),j,sum=0,k=0;
        printf("String #%d\n",i+1);
        for(j=0;j<len;j++)
        {
            if(s[j]=='Z')
                printf("A");

            else
                printf("%c",s[j]+1);
        }
        printf("\n");
            printf("\n");
    }
    return 0;
}
