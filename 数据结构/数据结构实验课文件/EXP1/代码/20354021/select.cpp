#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j,t,m;
	int a[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(m=i,j=i+1;j<=n;j++)
		{
			if(a[m]>a[j])m=j;	
		}
		t=a[m];
		a[m]=a[i];
		a[i]=t;		
	}
	for(i=1;i<=n;i++)printf("%d  ",a[i]);
	return 0;
}
