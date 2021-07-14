#include<iostream>
using namespace std;
int main()
{
	int n,a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++)
	{
		int min=a[i],min_num=i;
		for(int j=i;j<=n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				min_num=j;
			}
		}
		if(min_num!=i)
		{
			int t=a[min_num];
			a[min_num]=a[i];
			a[i]=t;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
