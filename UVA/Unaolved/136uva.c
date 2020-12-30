#include<stdio.h>
int main()
{
    int n=3,k=3,i;
    while(n>1)
    {
        for(i=2;i<n;i++)
        {
            if((n%2==0)||(n%3==0)||(n%5==0))
            {
                if(n%i!=0)
                    k++;
            }
        }
        n++;
        if(k==1500)
            break;
    }
    printf("The 1500'th ugly number is %d.",n);
    return 0;
}
