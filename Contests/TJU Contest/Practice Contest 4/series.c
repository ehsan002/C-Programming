#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        int arr[10],i;
        arr[0]=a,arr[1]=b,arr[2]=c;
        int dif1=abs(c-b),dif2=abs(b-a);
        int dif=dif1-dif2;
        if(c>=b)
        {
            for(i=3;i<6;i++)
            {
                arr[i]=arr[i-1]+abs(arr[i-1]-arr[i-2])+dif;
            }
        }
        else
        {
            for(i=3;i<6;i++)
            {
                arr[i]=arr[i-1]-abs(arr[i-1]-arr[i-2])-dif;
            }
        }
        printf("%d %d %d\n",arr[3],arr[4],arr[5]);
    }
    return 0;
}
