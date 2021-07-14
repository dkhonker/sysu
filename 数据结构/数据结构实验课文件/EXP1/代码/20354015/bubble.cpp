#include <stdio.h>
int main(){
	int n,i,j;
    int a[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&a[i]);}
	for(i=n;i>=2;i--)
	{
		for(j=1;j<i;j++)
		if(a[j]>a[j+1]){int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	for(i=1;i<=n;i++)
	{printf("%d",a[i]);}
}
