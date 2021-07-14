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
	int t;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(*(a+i)>*(a+i+1))
			{
				t=*(a+i);
				*(a+i)=*(a+i+1);
				*(a+i+1)=t;	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));	
	} 
	return 0;
 } 
