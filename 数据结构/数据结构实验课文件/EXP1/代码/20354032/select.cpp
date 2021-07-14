#include <stdio.h>
int main()
{
	int i,j,k,n,temp,a[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			k = a[j];
			if(k>a[j])
			{
				k = j;
			}
			temp = a[k];
			a[k] = a[j];
			a[j] = temp;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

