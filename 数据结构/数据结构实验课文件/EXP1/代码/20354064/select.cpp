#include<stdio.h>
int n;
int a[10001];
int main()
{
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		k=i;
		for(j=i+1;j<=n;j++)
		if(a[j]<a[k])
		{
			k=j;
		}
		int temp=a[k];
		a[k]=a[i];
		a[i]=temp;
	}
	  
		  
	  for(i=1;i<=n;i++) printf("%d ",a[i]);
	  return 0;
}
