#include <stdio.h>
int n;
int minx;
int a[10001];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<n;i++){
		minx=i;
		for(int j=i+1;j<=n;j++){
			if(a[minx]>a[j]){
				minx=j;	
			}
		}
		int temp=a[i];a[i]=a[minx];a[minx]=temp;	
	}
	for(int i=1;i<=n;i++)printf("%d",a[i]);
	return 0;
}
