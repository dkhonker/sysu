#include<stdio.h>
#define size 20000
int main(){
	char a[size];
	char b[size];
	char c[2*size+1];
	gets(a);
	gets(b);
	int i=0,j=0;
	while(a[i]!='\0'){
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0'){
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]='\0';
	printf("%s",c);
	return 0;
}
