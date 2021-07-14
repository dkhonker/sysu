#include<stdio.h>
#include<string.h>
int main()
{
	char a[20001];
	char b[20001];
	gets(a);
	gets(b);
	int c;
	c=strcmp(a,b);
	printf("%d",c);
	return 0;
}
