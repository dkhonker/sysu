#include<stdio.h>
int main(){
	int a[10001],b[10001];
	int n,t,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		k=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[k]){
			t=a[j];
			a[j]=a[k];
			a[k]=t;
			}
		}	
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
