#include <iostream>
#include<stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main()
{
	int i,j,n,k;
	int a[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
	   k=i;
	   for(j=i+1;j<=n;j++)
	   {
		if(a[k]>a[j]) k=j;
	   }
	   int c=a[i];a[i]=a[k];a[k]=c;
    }
    for(i=1;i<=n;i++) printf("%d",a[i]);
    return 0;
}
