#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int a[10001],i,j,temp,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=n;i>=2;i--)
	{
		for(j=1;j<i;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
