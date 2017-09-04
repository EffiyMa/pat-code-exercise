#include<stdio.h>
int main()
{
	int num,a,b,c,i;
	scanf("%d",&num);
	if(num<=0)
		;
	else if(num>0)
	{	
		a=num/100;
		b=(num%100)/10;
		c=num%10;
		if(a>0)
		{
			for(i=1;i<=a;i++)
			{
				printf("B");
			}
		}
		if(b>0)
		{
			for(i=1;i<=b;i++)
			{
				printf("S");
			}
		}
		if(c>0)
		{
			for(i=1;i<=c;i++)
			{
				printf("%d",i);
			}
		}
	}
return 0;
}