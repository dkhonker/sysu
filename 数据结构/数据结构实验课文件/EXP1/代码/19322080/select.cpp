#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n*sizeof(int));
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));	
	} 
	int temp,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			temp=i;
			if(*(a+temp)>*(a+j))
			{
				temp=j;
			}
		}
		t=*(a+i);
		*(a+i)=*(a+temp);
		*(a+temp)=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));	
	}
	return 0; 
}
