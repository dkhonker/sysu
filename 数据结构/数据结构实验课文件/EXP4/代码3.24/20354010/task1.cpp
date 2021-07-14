#include<stdio.h>
#include<string.h>

int main()
{
	char a[20001];char b[20001];
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}
