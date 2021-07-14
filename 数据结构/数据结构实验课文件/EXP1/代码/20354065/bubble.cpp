#include<stdio.h>
int main()
{
	int n;
	int a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	   scanf("%d",&a[i]);
	for(int i=n,change=1;i>=2&&change==1;i--)
	{
		for(int j=1;j<i;j++)
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			change=1;
		}
		change=0;
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
    return 0;	
} 
