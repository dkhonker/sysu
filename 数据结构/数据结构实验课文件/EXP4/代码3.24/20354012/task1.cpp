#include<stdio.h>
#include<string.h>
#define  MAX  20001
char a[MAX],b[MAX];
int main()
{
	gets(a);
	gets(b);
 
	puts(strcat(a,b));
	return 0;
	
} 
