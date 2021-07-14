#include <stdio.h>
#include<string.h>
int main(){
	int maxn=20001;
	char a[maxn],b[maxn];
	int c;
	gets(a);
	gets(b);
	c=strcmp(a,b);
	printf("%d",c);
	return 0;
}
