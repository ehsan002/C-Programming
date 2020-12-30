#include<stdio.h>
int main()
{
    char s[7];
    int n,amnt=0,i;
    scanf("%d",&n);
    int total=0;
    for(i=0;i<n;i++)
    {
        scanf(" %s",s);
        if(s[0]=='d'){
            scanf("%d",&amnt);
            total+=amnt;
        }
        else
            printf("%d\n",total);
    }
    return 0;
}
