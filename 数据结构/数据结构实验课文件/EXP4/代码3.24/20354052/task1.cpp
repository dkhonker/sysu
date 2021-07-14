#include <stdio.h>
#include <string.h>
#define MAX 20000

int main()
{
	char a[MAX],b[MAX],c[MAX];
	int i=0,j=0;
	gets(a);
	gets(b);
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0')
	{
		c[i++]=b[j++];
	}
	puts(c);
	return 0;
 } 
