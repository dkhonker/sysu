#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	int a[10001];
	int t;
	scanf("%d",&n);
	for(t=0;t<=n;t++)
	{
		scanf("%d",&a[t]);
	}
	int i,j,temp;
	for(i=n;i>=2;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(a[j]>a[j+1])
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	for(t=0;t<=n;t++)
	{
		printf("%d",a[t]);
	}
	return 0;
}
