#include <stdio.h>
int n,i,j;
int a[10001];
int main(){
	scanf("%d",&n);
	for( i=0;i<=n;i++)
	scanf("%d",&a[i]);
for(int i=0;i<=n;i++){

for( j=0;j<=n;j++)
	if(a[i]<a[j]){
		


int t=a[i];
a[i]=a[j];
a[j]=t;}}
for( i=0;i<=n;i++)

printf("%4d",a[i]);
	return 0;
} 
