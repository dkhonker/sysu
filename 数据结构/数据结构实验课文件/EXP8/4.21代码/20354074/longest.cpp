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
		int next=0; 
		for(int x=0;x<n;x++)//�ҳ�ʱ��Ϊ0�����ʱ����С������ 
		{
			if(r[x]==0&&p[x]<p[next]&&p[x]!=-1)next=x;
		}
		p[next]=p[next]-1;
		for(int x=0;x<n;x++)
		{
			if(p[x]==0)p[x]=-1,min_time=min_time+i+1;
		}
	}
	printf("%d",min_time);
 } 
