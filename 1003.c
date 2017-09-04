#include<stdio.h>
int main()
{
	int num,i;
	char c;
	int count[3],flag,judge,j;
	scanf("%d",&num);
	if(num==0)
		;
	else
	{
		for(i=0;i<=num-1;i++)
		{
			getchar();
			for(j=0;j<=3;j++)
			{
					count[j]=0;
			}
			flag=1,judge=1;
			
			while ((c=getchar())!='\n')
			{
				
				 if(c=='P')
				{
					flag=2;
					judge=1;
				}
				else if(c=='T')
				{
					flag=3;
					judge=1;
				}
				else if(c=='A')
				{
					judge=1;
					if(flag==1)
						count[1]++;
					else if(flag==2)
						count[2]++;
					else if(flag==3)
						count[3]++;
				}
				else 
				{
					judge=0;
				}
			}
			if(judge==1)
			{	if (count[1]==0&&count[2]!=0)
					printf("YES\n");
				else if(count[1]==0&&count[2]==0)
					printf("N0\n");
				else if(count[1]!=0&&count[1]*count[2]==count[3])	
					printf("YES\n");
				else
					printf("NO\n");
			}
			else if(judge==0)
				printf("NO\n");
		}
	}
	return 0;
}