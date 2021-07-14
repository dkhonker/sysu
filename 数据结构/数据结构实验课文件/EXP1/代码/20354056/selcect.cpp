#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,k,l,m;
	int a[10001];
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(m=1;m<n;m++){
for(i=m,j=m;i<n;i++){
if(a[i]<a[i+1]){
j=i;i++;}
else
i++;}
l=a[m];
a[m]=a[j];
a[j]=l;}
for(i=1;i<=n;i++)printf("%d",a[i]);
	return 0;
}
