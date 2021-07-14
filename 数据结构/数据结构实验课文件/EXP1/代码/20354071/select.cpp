#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i=1;
	int j=1;
	int temp=0;
	int a[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	for(j=i+1;j<=n;j++)
	{
	if(a[i]>a[j])
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	
}
}
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
		return 0;
}
