#include <iostream>
#include<stdio.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[20000],b[20000],c[20001];
	gets(a);
	getchar;
	gets(b);
	char *p=a;
	int m=strlen(a),n=strlen(b),i;
	for(i=0;i<m+n;i++){
		c[i]=*p;
		if(i==m-1)p=b;
		else p++;
	}
	c[m+n]='\0';
	puts(c);
	return 0;
}
