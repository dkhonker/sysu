#include<stdio.h>

int main(){
	
	int n,a[10001];
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
