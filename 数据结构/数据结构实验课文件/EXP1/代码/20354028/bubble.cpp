#include <stdio.h>
int i,j,n,temp;
int a[10000];
int main()
{
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=n;i>=2;i--)
	for(j=1;j<i;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	for(i=1;i<=n;i++)
	printf("%d ",a[i]); 
	return 0;
}
