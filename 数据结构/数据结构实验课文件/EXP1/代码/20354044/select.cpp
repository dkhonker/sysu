
#include<stdio.h>
int n;
int a[10001];
int main()
{
    int i=1;

	printf("输入数组元素个数\n");
	scanf("%d",&n);
	printf("输入数组的每个元素\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	for(i=1;i<=n;i++)
	printf("%d",a[i]);
	return 0;
}
