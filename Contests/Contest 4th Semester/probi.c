#include <stdio.h>
#include <string.h>
int main()
{
    char s,t,u;
    scanf("%c %c %c",&s,&t,&u);
            if(s>='0'&&s<='9')
                printf(":) ");
            else
                printf(":( ");
            if(t>='0'&&t<='9')
                printf(":) ");
            else
                printf(":( ");
            if(u>='0'&&u<='9')
                printf(":)");
            else
                printf(":(");
    return 0;
}
