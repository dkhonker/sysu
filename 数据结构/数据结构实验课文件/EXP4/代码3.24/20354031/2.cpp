#include<stdio.h>
#include<string.h> 
#define M 20000
int main(){
	char a[M],b[M];
	int i,n;
	gets(a);
	gets(b);
	i=strcmp(a,b);
	if(i>0)n=1;
	else if(i=0)n=0;
	else n=-1;
	printf("%d",n); 
	return 0;
} 
