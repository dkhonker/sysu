#include<stdio.h>
#define M 10001
int main()
{
	int a[M],i,j,n,k,min,recp;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		min=a[i];k=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<min)
			{min=a[j];k=j;}
		}
		recp=a[i];a[i]=min;a[k]=recp;
	}
	for(i=0;i<n;i++)printf("%d ",a[i]);
	return 0;
} 
