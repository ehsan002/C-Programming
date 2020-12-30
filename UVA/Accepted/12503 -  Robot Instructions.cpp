#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int t,n,i,j;
    string s[110];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int p=0;
        scanf("%d",&n);
        getchar();
        for(j=0;j<n;j++)
        {
            int pos =0;
            getline (cin, s[j]);
            if(s[j]=="LEFT")
                p--;

            else if(s[j]=="RIGHT")
                p++;

            else
            {
                int len=s[j].length();
                if(len==9)
                    pos=s[j][8]-48;
                else
                    pos=((s[j][8]-48)*10)+s[j][9]-48;


                if(s[pos-1]=="LEFT")
                {
                    p--;
                    s[j]="LEFT";
                }

                else if(s[pos-1]=="RIGHT")
                 {
                    p++;
                    s[j]="RIGHT";
                }
            }
        }

        printf("%d\n",p);
    }
    return 0;
}
