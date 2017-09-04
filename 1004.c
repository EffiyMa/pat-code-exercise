#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[101],num[101];
	int grd;
};
int main()
{
	int i,n,max=0,min=0,flagmax,flagmin;
	struct student*stu;
	scanf("%d",&n);
	stu=(struct student*)malloc(n*sizeof(struct student));
	if(n<=0)
		;
	else if(n>0)
	{
		for(i=0;i<=n-1;i++)
			{
				scanf("%s%s%d",stu[i].name,stu[i].num,&stu[i].grd);
			}
			min=stu[0].grd;
			max=stu[0].grd;
			for(i=0;i<=n-1;i++)
			{
				if(stu[i].grd>=max)
				{	
					max=stu[i].grd;
					flagmax=i;
				}
			}
			for(i=0;i<=n-1;i++)
			{
				if(stu[i].grd<=min)
				{
					min=stu[i].grd;
					flagmin=i;
				}
			}
			printf("%s %s\n",stu[flagmax].name,stu[flagmax].num);
			printf("%s %s\n",stu[flagmin].name,stu[flagmin].num);
	}
		return 0;
}