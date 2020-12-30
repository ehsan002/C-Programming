#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],s2[10000],temp[10000];
    int i,j,k,l,t,t2,x,y;
    scanf("%d",&y);
    for(x=0;x<y;x++)
    {
        scanf(" %[^\n]",s);
        int len=strlen(s);
        t=0,t2=0;
        for(i=0;i<len;i++)
        {
            if(s[i]==' '||i==len-1)
            {
                if(i==len-1){
                    temp[t2]=s[i];
                    temp[t2+1]='\0';
                }
                else
                    temp[t2]='\0';
                int lent=strlen(temp);
                for(j=t,k=lent-1;k>=0;j++,k--)
                {
                    s2[j]=temp[k];
                    temp[k]='\0';
                }
                if(j==len)
                    s2[j]='\0';
                else
                    s2[j]=' ';
                t=j+1;

                t2=0;
            }
            else
            {
                temp[t2]=s[i];
                t2++;
            }
        }
        puts(s2);
    }
    return 0;
}
