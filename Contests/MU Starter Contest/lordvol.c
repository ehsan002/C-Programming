#include<stdio.h>
#include<string.h>
int main()
{

    int t,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char s1[51],s2[51];
        scanf("%s %s",s1,s2);
        int l1=strlen(s1);
        int l2=strlen(s2);
        int temp=0,tem;
            if(l1==l2)
            {
                for(j=0;j<l1;j++)
                {
                    if(s1[j]>='A'&&s1[j]<='Z')
                        s1[j]=s1[j]+32;
                    for(k=0;k<l1;k++)
                    {
                        if(s2[k]>='A'&&s2[k]<='Z')
                            s2[k]=s2[k]+32;

                        if(s1[j]==s2[k]){
                            temp=1;
                            s2[k]=' ';
                            break;
                        }

                        else
                            temp=0;
                    }
                    if(temp==0)
                        break;
                }
                if(temp==0)
                    printf("No\n");
                else
                    printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
