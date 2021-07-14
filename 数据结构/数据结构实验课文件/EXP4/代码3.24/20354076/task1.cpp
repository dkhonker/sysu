#include <stdio.h>
#include<string.h> 

int main(){
	char a[20001],b[20001],c[40001];
	int i=0;
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++) c[i]=a[i];
	for(i=strlen(a);i<strlen(a)+strlen(b);i++) c[i]=b[i-strlen(a)];
	printf("%s",c);
	return 0;
}

