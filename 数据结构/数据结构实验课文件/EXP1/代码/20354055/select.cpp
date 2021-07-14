#include<stdlib.h>
#include<stdio.h>
int main()
 {
 	int a[10001],i,j,b,n;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)scanf("%d",&a[i]);
 	for(i=0;i<n;i++)
 	for(j=i;j<n;j++)
 	if(a[i]>a[j]){b=a[i];a[i]=a[j];a[j]=b;}
 	for(i=0;i<n;i++)printf("%d\t",a[i]);
 	return 0;
 } 
