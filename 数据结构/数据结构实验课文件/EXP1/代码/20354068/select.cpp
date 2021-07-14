#include<stdio.h>
int a[10001];
int n,k;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for( k=i;k<n;k++)
	   {
		int m=a[k];
		if(a[k]>a[k+1])
			m=a[k+1];
	   }
	int temp=a[i];
	a[i]=a[k];
	a[k]=temp;
	}
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
