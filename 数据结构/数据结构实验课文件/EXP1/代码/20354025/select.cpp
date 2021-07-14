#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int a[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	   scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	   {int j=i;
	    for(int k=i+1;k<=n;k++)
	       if(a[k]<a[j])
	          {
			  j=k;
	          int temp=a[i];
	          a[i]=a[j];
	          a[j]=temp;
	          }
	   }
	for(int i=1;i<=n;i++)
	   printf("%d",a[i]);
	return 0;
}
