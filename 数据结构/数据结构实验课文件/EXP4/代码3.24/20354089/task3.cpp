#include<stdio.h>
int main(){
	char a[20001],b[20001];
	int i,j,k;
	int m=0;
	scanf("%d",&i);
	scanf("%d",&j);
	scanf("%s",a);
	for(k=i-1;k<=j-1;k++){
		b[m++]=a[k];
	}
	printf("%s",b); 
	return 0;
} 
