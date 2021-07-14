#include<stdio.h>
int main()
{
	int a[10];
	int m,n,k,l;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	scanf("%d",&a[m]);
	for(int j=1;j<n;j++)
	{
		int i=j;
		for(int s=j+1;s<=n;s++)
	{
		if (a[s]<a[i])i=s;
		int temp=a[j];a[j]=a[i];a[i]=temp;
	}
	}
	for(k=1;k<=n;k++)
	printf("%d",a[k]);
	return 0;
 } 
