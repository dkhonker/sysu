#include<stdio.h>

int main()
{
	int n,temp;
	int a[10001];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int k=0;k<n-1;k++)
	{
		temp=k;
		for(int j=k+1;j<n;j++)
		{
			if(a[j]<a[temp])
			{
				temp=j;
			}
		}
		int t=a[k];
		a[k]=a[temp];
		a[temp]=t;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
