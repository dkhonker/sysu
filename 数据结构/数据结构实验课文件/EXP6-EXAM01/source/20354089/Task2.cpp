#include<stdio.h>
int n,a[20]={0}; 
void Gray(int k,int t)
{
	if(!a[k-2])a[k]=t;
	else a[k]=!t;
	if(k==n+2)
	{
		for (int i=3;i<=n+2;i++)
		printf("%d",a[i]);
		printf("\n");
		return;
	}
	Gray(k+1,t);
	Gray(k+1,!t);
}
int main()
{
	scanf("%d",&n);
	Gray(2,0);
	return 0;
}
