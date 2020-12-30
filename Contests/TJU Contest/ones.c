#include<stdio.h>
int main()
{
    long n,i,f,cnt,temp;
    while(scanf("%ld",&n)==1)
    {
        for(i=1;i+=2;)
        {
            cnt=0,f=0;
            if(i==5)
                continue;
            temp=n*i;
            while(temp!=0)
            {
                if(temp%10==1)
                    cnt++;
                else
                    break;
                temp/=10;
                if(temp==0)
                    f=1;
            }
            if(f==1)
                break;
        }
        printf("%ld\n",cnt);
    }
    return 0;
}
