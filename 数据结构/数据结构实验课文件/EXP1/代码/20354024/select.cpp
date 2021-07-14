#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,a[10001],i,flag,k,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (k=i+1,flag=i;k<n;k++) 
			{if (a[flag]<a[k]) flag=k;}
		t=a[i];
		a[i]=a[flag];
		a[flag]=t;
	}
	for(i=0;i<n;i++) printf ("%d ",a[i]);
	return 0;
}
