#include<stdlib.h>
#include<stdio.h>
int main()
 {
 	int a[10001],i,j,b,n;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)scanf("%d",&a[i]);
 	for(i=n-1;i>=1;i--)
 	for(j=0;j<i;j++)
 	if(a[j]>a[j+1]){b=a[j];a[j]=a[j+1];a[j+1]=b;}
 	for(i=0;i<n;i++)printf("%d\t",a[i]);
 	return 0;
 } 
