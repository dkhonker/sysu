#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[10001],i,m,n,j,min;

scanf("%d",&n);
	for(i=0;i<=n;i++)
	    scanf("%d",&a[i]);


    for(j=0;j<=n;j++)
    {
    for(i=0,min=a[i];i<=n;i++)
	 {
	  if(min>a[i+1])
	        m=min;
			min=a[i+1];
			a[i+1]=m;
	}
       a[j]=min;
     }
     for(i=0;i<=n;i++)
     printf("%d ",a[i]);
	return 0;
}
