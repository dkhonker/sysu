#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0,j=0,b;
	long long int a[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			b=a[i];a[i]=a[j];a[j]=b;
		} 
	}
	for(i=0;i<n;i++)printf("%d\t",a[i]);
	system("pause");
	return 0;
}
