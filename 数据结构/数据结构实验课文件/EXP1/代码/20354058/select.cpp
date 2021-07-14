#include<iostream>
int main()
{
	int a[10001];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int k=1;k<=n;k++)
	  for(int j=k+1;j<=n;j++)
	  if(a[j]<a[k]) {int temp=a[j];a[j]=a[k];a[k]=temp;}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
} 
