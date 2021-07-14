#include <stdio.h>
int main() 
{
	int arr[10000];
	int n;
	int i;
	int j;
	int m=1; 
	scanf("%d",&n) ;
	for(i=0;i<n;i++)
	scanf("%d ",&arr[i]);
	int temp; 
	for(i=n-1;i>=1&&m;i--)
	{
	m=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			m=1;
		}
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
