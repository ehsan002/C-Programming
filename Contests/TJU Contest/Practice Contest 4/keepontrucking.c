#include<stdio.h>
int main()
{
    int arr[4];
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        arr[0]=a,arr[1]=b,arr[2]=c;
        int t=-1,i;
        for(i=0;i<3;i++)
        {
            if(arr[i]<=168)
            {
                t=arr[i];
                break;
            }
            else
                t=-1;
        }
        if(t==-1)
            printf("NO CRASH\n");
        else
            printf("CRASH %d\n",t);
    }
    return 0;
}
