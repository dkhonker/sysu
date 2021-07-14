#include<stdio.h>
#include<string.h> 
#define M 20000
int main(){
	int i,j=0;
	char a[M],b[M],c[M];
	gets(a);
	gets(b);
	for(i=0;i<M&&a[i]!='\0';i++){
		c[i]=a[i];
	}
	while(b[j]!='\0'){
		c[i++]=b[j++];
	}
	puts(c);
	return 0;
} 
