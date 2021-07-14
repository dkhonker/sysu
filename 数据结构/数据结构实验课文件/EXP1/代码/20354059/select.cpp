#include <stdio.h>
int n,i,k,j,temp;
int a[10001];
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=i+1;j<=n;j++)
		{	
		if(a[k]>a[j])
		k=j;
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;	
	    }
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
