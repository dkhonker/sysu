#include <iostream>
int main() {
	int n;
	int a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]); 
	for(int i=1;i<=n;i++)
	   for(int j=i+1;j<n;j++)
	      if(a[i]>a[j+1]){
		  int temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;}
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
}
