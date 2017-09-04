#include<stdio.h>
int main()
{
	int i=0,j;
	char sentnc[101][101];
	while(scanf("%s",&sentnc[i])>0 && getchar()!='\n')
		i++;
	for(j=i;j>=0;j--)
	{
		if(j!=0)
			printf("%s ",sentnc[j]);
		else if(j==0)
			printf("%s\n",sentnc[j]);
	}
	return 0;
}
