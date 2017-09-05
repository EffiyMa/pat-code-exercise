#include<stdio.h>
#include<time.h>
int main()
{
	const int MOD =1000000;
	int n,s=0;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int ftl=1;
		for(j=1;j<=i;j++)
		{
			ftl=(ftl*j% MOD);
		}
		s=(s+ftl)%MOD;
	}
	printf("%d\n",s);
	printf("Time used=%.2f\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}

