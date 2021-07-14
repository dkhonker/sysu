#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	int a[100001];
	scanf("%d",&n);
	int temp=0;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=n;i>=2;i--)
	 for(int j=1;j<i;j++)
	   if(a[j]>a[j+1]) 
	   {
	   	temp=a[j+1];
	   	a[j+1]=a[j];
	   	a[j]=temp;
	   }
	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	return 0;
}
