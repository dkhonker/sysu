#include <stdio.h>
int main() 
{
	int arr[10000];
	int n;
	int i;
	int j;
	scanf("%d",&n) ;
	for(i=0;i<n;i++)
	scanf("%d ",&arr[i]);
	int temp; 
	for(i=0;i<10000;i++)
	{
	for(j=i+1;j<10000;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	}
	for(i=0;i<10000;i++)
	printf("%d ",arr[i]);
	return 0;
}
