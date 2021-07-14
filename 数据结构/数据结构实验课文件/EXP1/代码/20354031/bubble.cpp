#include<stdio.h>
#define M 10001//数组大小 
int main(){
	int a[M],i,j,recp,n;
	scanf("%d",&n); 
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				recp=a[j];a[j]=a[j+1];a[j+1]=recp;
			}
		}
	}
	for(i=0;i<n;i++)printf("%d ",a[i]);
	return 0;
} 
