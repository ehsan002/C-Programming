#include <stdio.h>
int main()
{
    int hasan,i,j;
    scanf("%d",&hasan);
    for(i=1;i<=hasan;i++)
    {
        for(j=1;j<hasan;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
