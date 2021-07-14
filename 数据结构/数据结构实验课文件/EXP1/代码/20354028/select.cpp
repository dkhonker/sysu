#include <stdio.h>
int i,j,n,temp,k,t;
int a[10000];
int main()
{
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		k=a[i];
		for(t=i+1;t<=n;t++)
		{
			if(k>a[t])
			{
				temp=k;
				k=a[t];
				a[t]=temp;
			}
		}
		a[i]=k;
	}
	for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
	return 0;
}
