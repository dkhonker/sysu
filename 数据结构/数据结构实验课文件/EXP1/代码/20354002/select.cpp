#include <stdio.h>
int n,flag=0; 
int min=0;
int a[10001] ;
int main ()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)  scanf("%d",&a[i]);
    for(int j=0;j<n-1;j++)
    {
	   min=a[j];
	   flag=j;
       for(int i=j+1;i<n;i++)
       {
    	   if(a[i]<min)
    	  {
		   min=a[i];
    	   flag=i;
          }
	   } 
	   int temp=a[j];
	   a[j]=min;
	   a[flag]=temp;
	   
    }
    for(int i=0;i<n;i++)  printf("%d",a[i]);
	return 0;
}

