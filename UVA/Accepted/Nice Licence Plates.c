#include<stdio.h>
int main()
{
    int t,i;
    char s[10];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        int left=((s[0]-65)*676)+((s[1]-65)*26)+(s[2]-65);
        int right = ((s[4]-48)*1000)+((s[5]-48)*100)+((s[6]-48)*10)+(s[7]-48);
        int d = abs(left-right);
        if(d<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
