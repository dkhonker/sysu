#include<stdio.h>
#include<string.h>
int main(){
	char a[40001],b[20000];
	int i,j;
	gets(a);
	gets(b);
	i=strlen(a);
	j=0;
	while(b[j]!='\0'){
	a[i]=b[j];
	i++;
	j++;}
	puts(a);
	return 0;
}
