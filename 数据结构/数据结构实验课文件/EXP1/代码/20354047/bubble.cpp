#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int a[10001],n=0,i,j;
   
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-1-i;j++)
    	
        if(a[i]>a[i+1])
        {
		   
		   j=a[i];
		   a[i]=a[i+1];
		   a[i+1]=j;
     	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

}
