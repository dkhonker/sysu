#include <stdio.h>
#include <stdlib.h>
int main()
{	int n;
	int a[10001];
	int t=1,i,j;
	int max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=2;i--)
	{
		for(max=a[1],j=2;j<=i;j++)
		{
			if(max<a[j])
			{	max=a[j];
				t=j;
			}
		}
		a[t]=a[i];
		a[i]=max;
		t=1;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}

