#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	int max=20001;
	char a[max],b[max];
	gets(a);
	gets(b);
	c=strcmp(a,b);
	printf("%d",c);
	return 0;
}
