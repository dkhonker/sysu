#include <stdio.h>
#include <string.h>
int main()
{
	char a1[10000],a2[10000],a3[20000];
	gets(a1);
	gets(a2);
	int m=strlen(a1);
	int n=strlen(a2);
	for(int i=0;i<m;i++)
	a3[i]=a1[i];
	for(int i=0;i<n;i++)
	a3[m+i]=a2[i];
	a3[m+n+1]='\0';
	puts(a3);
	return 0;
} 
