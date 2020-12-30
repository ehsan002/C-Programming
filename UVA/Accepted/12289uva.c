#include<stdio.h>
int main()
{
    int n,i;
    char s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        int len=strlen(s);
        if(len==5)
        {
            printf("3\n");
        }
        else if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
