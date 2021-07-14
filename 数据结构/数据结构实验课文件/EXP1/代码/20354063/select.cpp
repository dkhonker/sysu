#include<stdio.h>
int main()
{
	int i,j,k,min,n;
	int a[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		  k=a[min];
		  a[min]=a[i];
		  a[i]=k;
	}
	for(i=0;i<n;i++)printf("%d ",a[i]);
	return 0;
}
