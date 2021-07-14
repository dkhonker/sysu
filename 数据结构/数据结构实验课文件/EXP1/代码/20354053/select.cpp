#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,t;
	int a[10001];
	scanf("%d",&n);
	 for(t=0;t<=n;t++)
	 {
	 	scanf("%d",&a[t]);
	 }
	 int i,j,k;
	 for(i=0;i<=n-1;i++)
	 {
	 	for(j=i+1;j<=n;j++)
	 	{
	 		if(a[i]>a[j])
	 		k=a[i];a[i]=a[j];a[j]=k;
	    }
	 }
	 for(t=0;t<=n;t++)
	 {
	 	printf("%d\n",a[t]);
	 }
	return 0;
} 
