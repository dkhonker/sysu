#include<stdio.h>
int main()
{
	char a[20000];
	char b[20000];
	char c[40000];
	gets(a);
	gets(b);
	int i=0,j=0;
	int k=0;
	while (a[i]) c[k++]=a[i++];
	while (b[j]) c[k++]=b[j++];
	c[k]='\0';
	puts(c);
	return 0;
}
