#include<stdio.h>
#include<string.h>
int main(){
	char a[20001],b[20001];
	int c;
	gets(a);
	gets(b);
	c=strcmp(a,b);
	if(c==0) printf("0");
	else if(c>0) printf("1");
	else printf("-1");
	return 0;
}
