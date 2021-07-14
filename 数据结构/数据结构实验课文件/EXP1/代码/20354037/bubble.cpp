//bubble.cpp
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[10001],n;
	//cin>>n; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		//cin>>a[i];
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				//swap(a[j+1],a[j]);
				int t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		//cout<<a[i]<<" ";
		printf("%d ",a[i]);
	}
	return 0;
}
