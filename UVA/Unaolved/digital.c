#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    int n;
    char g1[8][18]= {"........||.../\\...","........||../..\\..",".../\\...||./....\\.","../..\\..||/......\\","./....\\.||\\______/","/......\\||........","\\______/||........"};
    char g2[8][18]= {".../\\...||........","../..\\..||........","./....\\.||.../\\...","/......\\||../..\\..","\\______/||./....\\.","........||/......\\","........||\\______/"};
    char g3[8][18]= {"........||........",".../\\...||.../\\...","../..\\..||../..\\..","./....\\.||./....\\.","/......\\||/......\\","\\______/||\\______/","........||........"};
    printf("Please Enter Any Number 0 to 2 :: ");
    scanf("%d",&n);
    if(n==0)
        for(i=0; i<8; i++)
        {
            for(j=0; j<18; j++)
            {
                printf("%c",g1[i][j]);
            }
            printf("\n");
        }
    else if(n==1)
        for(i=0; i<8; i++)
        {
            for(j=0; j<18; j++)
            {
                printf("%c",g2[i][j]);
            }
            printf("\n");
        }
    else if(n==2)
        for(i=0; i<8; i++)
        {
            for(j=0; j<18; j++)
            {
                printf("%c",g3[i][j]);
            }
            printf("\n");
        }
    return 0;
}
