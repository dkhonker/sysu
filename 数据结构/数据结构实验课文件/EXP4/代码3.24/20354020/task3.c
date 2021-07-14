#include<stdio.h>
#include<string.h>
int main(){
	char a[20001];
	int m,n;
	scanf("%d%d",&m,&n);
	gets(a);
	int i=m-1;
	for(;i<m+n;i++)
	printf("%c",a[i]);
	return 0;
}
