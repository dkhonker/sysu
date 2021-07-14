#include<stdio.h>
#include<string.h>
int main()
{
	int max=20001;
	char a[max],b[max];
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}
