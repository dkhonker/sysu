#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i,j,k,n,a[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[k]>a[j]) {int t=a[k];a[k]=a[j];a[j]=t;}
		a[i]=a[k];	
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
	return 0;
}
