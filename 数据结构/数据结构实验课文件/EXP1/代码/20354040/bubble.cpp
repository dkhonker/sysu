#include<stdio.h>
int n;
int a[10001];
int main()
{
	int change=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=n,change=1;i>=2&&change;i--)
	{
		change=0;
		for(int j=1;j<i;j++)
		if(a[j]>a[j+1])
		{
			int tempt=a[j];
			a[j]=a[j+1];
			a[j+1]=tempt;
			change=1;
		}
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
