#include<stdio.h>
int main(){
	int min,i,j,n;
	int a[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++){
	   min=a[i];
	 for(j=i;j<=n;j++){
	   if(a[j]<min) 
	   {min=a[j];}
	   a[i]=min;
       } 
   }
    for(i=1;i<=n;i++)
    printf("%d",a[i]);
       return 0;
}
