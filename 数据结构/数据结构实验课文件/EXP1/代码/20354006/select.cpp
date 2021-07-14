#include<stdio.h>
int main()
{
	int i,j,n,t,k;
	int a[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	k=a[i];
	for(j=i;j<n;j++)
	if(k>=a[j])
		{
		k=a[j];
		t=j;
		}
	a[t]=a[i];
	a[i]=k;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
