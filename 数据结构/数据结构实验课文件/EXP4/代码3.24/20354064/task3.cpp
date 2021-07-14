#include<stdio.h>
char a[20000];
char b[20000];
int main(){
	int m,n;
	scanf("%d%d\n",&m,&n);
	gets(a);
	char *p;
	p=a+m-1;
	for(int k=0;k<n;k++){
		b[k]=p[k];
	}
	puts(b);
	return 0;
}
