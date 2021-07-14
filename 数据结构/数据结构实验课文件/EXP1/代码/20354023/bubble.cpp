#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a[10001];
	int n=0;
	int i=1,j=1;
	int t=0;	
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]) ;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			 if(a[j]>a[j+1]) 
		      {
		      	t=a[j];
		      	a[j]=a[j+1];
		      	a[j+1]=t;
			  }
		}
		  
		
	}
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	
	
	
	
	return 0;
}
