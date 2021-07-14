#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{    int n,j;
	int a[10001];
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=n;i>=2;i--)
	for(int j=0;j<i;j++)
	{
		if(a[j]>a[j+1])
		{
			int t=0;t=a[j+1];a[j+1]=a[j];a[j]=t;
		}
	}
	for(int i=0;i<=n;i++)
	printf(" %d",a[i]);
	return 0;
}
