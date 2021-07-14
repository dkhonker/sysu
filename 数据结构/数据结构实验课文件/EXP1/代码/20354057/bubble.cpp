#include <stdio.h>
int n;
int a[10001];
int i;
int change;
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	for(i=n;i>=2 ;i--)
		for(int j=1;j<i;j++)
			if (a[j]>a[j+1]){
				int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
				}
	for(int i=1;i<=n;i++)printf("%d",a[i]);
	return 0;	
}
