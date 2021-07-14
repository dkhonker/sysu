#include<stdio.h>
int main()
{
	int n;
	int a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		int temp;
		int k=i;
		int j;
		for(j=i;j<=n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}
