#include <stdio.h>
#include <string.h>
#define MAX 20000

int main()
{
	char s[MAX],a[MAX];
	int pos,len;
	scanf("%d %d\n",&pos,&len);
	gets(s);
	for(int i=0;i<len;i++)
	{
		a[i]=s[pos-1];
		pos++;
	}
	for(int j=0;j<len;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}
