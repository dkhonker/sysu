#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000],b[20000];
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
 } 
