#include <stdio.h>
int main()
{
	int n,m,index=1;
	while(scanf("%d%d",&n,&m) ==2)
	{
		if(m>0)
		{
			if(index==1)
			{	printf("%d %d",n*m,m-1);
				index=0;
			}
			else 
				printf(" %d %d",n*m,m-1);
		}
	}
	if(index==1)
		printf("0 0");
	return 0;
}
	