#include<stdio.h>
#include<string.h>

int main()
{
    char s[1010];
    int arr[100],arr2[100],arr3[100],j,i,flag=0;
    while(gets(s))
    {
        memset(arr,0,sizeof(arr));
        int len = strlen(s);

        for(i=0;i<len;i++){
            arr[s[i]-32]++;
    }

        for(i=95,j=0;i>=0;i--){
            if(arr[i]!=0)
            {
                arr2[j]=arr[i];
                arr3[j]=i;
                j++;
            }
        }
        int k;
        for(i=0;i<j;i++)
        {
            for(k=1;k<j;k++)
            {
                if(arr2[k]<arr2[k-1])
                {
                    int t=arr2[k];
                    arr2[k]=arr2[k-1];
                    arr2[k-1]=t;

                    t=arr3[k];
                    arr3[k]=arr3[k-1];
                    arr3[k-1]=t;

                }
            }
        }

        if(flag!=0)
            printf("\n");

        for(i=0;i<j;i++)
            printf("%d %d\n",arr3[i]+32,arr2[i]);
    flag=1;
    memset(arr2,0,sizeof(arr2));
    memset(arr3,0,sizeof(arr3));
    memset(s,'\0',sizeof(s));

    }
    return 0;
}
