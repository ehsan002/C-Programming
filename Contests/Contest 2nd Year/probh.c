#include<stdio.h>
int main()
{
	char s[10000];
	while(gets(s))
	{
		int i,d=0,m=0,t=0;
		int len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='D')
				d++;
			if(s[i]=='M')
				m++;
			if(s[i]=='T')
				t++;
		}
		printf("%d %d %d\n",d,m,t);
	}
	return 0;
}
