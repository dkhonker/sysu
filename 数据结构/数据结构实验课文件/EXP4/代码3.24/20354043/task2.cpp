#include <stdio.h>
int main(){
	char a[20000],b[20000];
	gets(a);
	gets(b);
	if(a>b)printf("1");
	if(a==b)printf("0");
	if(a<b)printf("-1");
}
