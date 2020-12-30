#include<stdio.h>
int main()
{
	int n,i,m,j,a,k;
	n=5;
	m=n-1;
	a=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" ");
		}
		printf("/");
		m--;
		for(k=0;k<a;k++)
		{
			printf(" ");
		}
		a=a+2;
		printf("\\\n");
	}
	printf("    ~~\n");
	printf("  (^)(^)\n");
	printf("   (^^)\n");
	return 0;
}
