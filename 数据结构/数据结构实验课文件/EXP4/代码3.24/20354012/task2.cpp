#include<stdio.h>
#include<string.h>
#define  MAX  20001
char a[MAX],b[MAX];
int main()
{
	gets(a);
	gets(b);
	if(strcmp(a,b) > 0)
	printf("1");
	if(strcmp(a,b) < 0)
	printf("-1");
	if (strcmp(a,b) == 0)
	printf("0");
	return 0;
	
}
