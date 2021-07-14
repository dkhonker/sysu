#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int i;
	int a[10001];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int k;
	for(k=0;k<=n-1;k++)
	{
		int min,temp;
		for(i=k+1;i<=n;i++)
		{
			if(a[i]<a[min])
			min=i;
		}
		temp=a[min];
		a[min]=a[k];
		a[k]=temp;
	}
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	return 0;
}
