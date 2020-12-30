#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string s1[110],s2[110],s3[110];
    int n,i,j,m;
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            getline (cin, s1[i]);

            getline (cin, s2[i]);

        }

        cin>>m;
        getchar();
        for(i=0;i<m;i++)
        {
            getline (cin, s3[i]);

            for(j=0;j<n;j++)
            {
                if(s3[i]==s1[j])
                {
                    cout<<s2[j];
                    cout<<'\n';
                }
            }
        }
    }
    return 0;
}
