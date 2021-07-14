#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int min=i;
		for(int j=i+1;j<=n;j++)
			if(a[j]<a[min])min=j;
		int temp=a[i];a[i]=a[min];a[min]=temp;
				
	}	
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
	}
