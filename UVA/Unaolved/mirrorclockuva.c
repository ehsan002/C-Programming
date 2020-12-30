#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        int hour=b/5;
        int temp=0;
        if(b%5!=0)
            temp=5-b%5;
        int mint;
        if(a==12)
            mint=a*5-temp;
        else
            mint=a*5+temp;
        printf("%d %d\n",hour,mint);
    }
}
