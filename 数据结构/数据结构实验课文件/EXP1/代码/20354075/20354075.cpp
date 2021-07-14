#include <iostream>
int n;
int a[10001];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=n;i>=2;i--)
	   for(int j=1;j<i;j++)
	      if(a[j]>a[j+1])
	      {
	      	int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		  }
	for(int i=1;i<=n;i++)
	     printf("%d",a[i]);
	return 0;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

