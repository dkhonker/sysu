#include <stdio.h>
int main()
{
	int a[10000];
	int i,j,k;
	for(i=0;i<10000;i++)
	scanf("%d ",&a[i]);
	int temp;
	for(i=0;i<9999;i++)
	{
	k=i;
	for(j=i+1;j<10000;j++)
	{
		if(a[k]<a[j])
		k=j;
	}
	temp=a[k];
	a[k]=a[i];
	a[i]=temp;
    }
    for(i=0;i<10000;i++)
    printf("%d ",a[i]);
	return 0;
}
