#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,j,a[10001],temp;
	int *min;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
    min=&a[i];
	for(j=i+1;j<n;j++)
	{
		if(*min>a[j]) min=&a[j];
	}	
	if(*min!=a[i])
	{
		temp=a[i];a[i]=*min; *min=temp;
	}
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
