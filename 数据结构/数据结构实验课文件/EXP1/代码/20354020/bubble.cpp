
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=10000,a[10000];
	int i,j,t;
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=n;i>=2;i--)
	   for(j=1;j<i;j++)
	   {
	      if(a[j]>a[j+1])
	      {
	         t=a[j];
	         a[j]=a[j+1];
  	         a[j+1]=t;
	      }
          }
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
