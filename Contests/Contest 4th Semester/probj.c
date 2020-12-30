#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i,len,j=0;
    while(gets(s))
    {
        j++;
        len=strlen(s);
        int k=0;
        for(i=0;i<len;i++)
        {
            if(s[i]=='@')
                k++;
        }
        printf("Case %d: %d\n",j,k);
    }
    return 0;
}
