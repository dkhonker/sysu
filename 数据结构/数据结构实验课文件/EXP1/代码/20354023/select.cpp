#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a[10001];
	int n=0;
	int i=1,j=1;
	int t=0,k=0,flag=0;	
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]) ;
	
	for(i=0;i<n;i++)
	{
		flag=0;
		
		for(j=i;j<n;j++)
		{	
		    k=i;
		    if(a[k]>a[j])    
		    {
		       flag=1; 
		       k=j;
		    } 	
	    }
	    
	    if(flag==1) 		
		    {
			   t=a[i];
		   	   a[i]=a[k];
			   a[k]=t;	
			} 
	}
		
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
}




