#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a[10000];
	int i=1;
	int j=1;
	int temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
	for(j=i+1;j<=n;j++)
    {
    	if(a[i]>a[j])
    	{
    		temp=a[i];
    		a[i]=a[j];
    		a[j]=temp;
		}
	}
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
