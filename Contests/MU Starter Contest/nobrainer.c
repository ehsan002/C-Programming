#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char s1[102],s2[102];
    for(i=0;i<n;i++){
        scanf("%s %s",s1,s2);
        int len1=strlen(s1);
        int len2=strlen(s2);
        if(len1==len2)
        {
            for(j=0;j<len1;j++)
            {
                if(s1[j]>s2[j])
                {
                    printf("MMM BRAINS\n");
                    break;
                }
                else if(s1[j]<s2[j]){
                    printf("NO BRAINS\n");
                    break;
                }
                else if(j==len1-1)
                    printf("MMM BRAINS\n");
            }
        }
        else if(len1>=len2)
            printf("MMM BRAINS\n");
        else
            printf("NO BRAINS\n");
    }
    return 0;
}
