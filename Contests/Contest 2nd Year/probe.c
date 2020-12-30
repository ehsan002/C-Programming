#include<stdio.h>
int main()
{
	long n;
	while(scanf("%ld",&n)==1)
	{
		long ans=n*((2*n)-1);
		printf("%ld\n",ans);
	}
	return 0;
}
