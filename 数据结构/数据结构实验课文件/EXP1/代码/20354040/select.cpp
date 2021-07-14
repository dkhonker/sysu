#include<stdio.h>
int n;
int a[10001];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		int k=i;
		for(int j=k+1;j<=n;j++)
		{
			if(a[k]>a[j])
			k=j;
		}
		int temp=a[k];
		a[k]=a[i];
		a[i]=temp;
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
}
