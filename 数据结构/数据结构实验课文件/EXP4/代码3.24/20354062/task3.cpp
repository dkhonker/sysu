#include<iostream>
#include<stdio.h>
#include<string.h>

int main(){
	char a[20000],b[20000];
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	getchar();
	gets(a);
	
	for(i=m-1,j=0;i<m+n-1;i++,j++){
		b[j]=a[i];
	}
	b[j]='\0';
	printf("%s\n",b);
}
