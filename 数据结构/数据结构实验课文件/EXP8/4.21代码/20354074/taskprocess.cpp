#include<stdio.h>

int main()
{
	int n;
	int r[100];
	int p[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&r[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	int sum_time=0;
	int min_time=0;
	for(int i=0;i<n;i++)
	{
		sum_time=sum_time+p[i];
	}
	for(int i=1;i<=sum_time;i++)
	{
		for(int x=0;x<n;x++)
		{
			if(r[x]!=0)r[x]=r[x]-1;
		}
		int next; 
		next=300;
		int min=300;
		for(int x=0;x<n;x++)//找出时限为0的完成时间最小的量； 
		{
			if(r[x]==0&&p[x]>0&&p[x]<next)next=p[x],min=x;
		}
		p[min]=p[min]-1;
		for(int x=0;x<n;x++)
		{
			if(p[x]==0){p[x]=-1,min_time=min_time+i+1;}
		}
	}
	printf("%d",min_time);
 } 
