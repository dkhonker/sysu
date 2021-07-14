#include<stdio.h>

int n;

int a[10001];

int main()

{
	int k,i,j;
	
	int t;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	
	scanf("%d",&a[i]);

   	for(i=1;i<=n;i++)
   	
   	{
   		int k=i;
	
        for(j=i+1;j<=n;j++)
	  	
	  	if(a[k]>a[j]) k=j;
	  	
	  	t=a[i];
	  	
	  	a[i]=a[j];
	  	
	  	a[j]=t;
	  	
	  }
	  
	for(i=1;i<=n;i++)
	
	printf("%d ",a[i]);

	return 0;
}
