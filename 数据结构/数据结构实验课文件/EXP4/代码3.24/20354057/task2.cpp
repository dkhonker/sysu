#include <stdio.h>
#include <string.h>

 int main(){
 	char a[20001],b[20001];
 	gets(a);
 	gets(b);
 	int k;
	k=strcmp(a,b);
	printf("%d",k);
 	return 0;
 }
