#include<iostream>

int main()
{
	int temp=0; 
	int mark;
	int n;
	int a[100001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		mark=i;
		for(int j=i;j<=n-1;j++)
	 	  if(a[j+1]<a[mark]) mark=j+1;
	 	temp=a[i];
	 	a[i]=a[mark];
	 	a[mark]=temp;
	 	
	}
	for(int i=1;i<=n;i++) printf("%d ",a[i]); 
	return 0;
 } 
