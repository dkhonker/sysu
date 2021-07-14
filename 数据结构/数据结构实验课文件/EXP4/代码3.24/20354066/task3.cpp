#include<stdio.h>
int main()
{
	int pos,len;
	scanf("%d%d",&pos,&len);
	char s[20000];
	getchar(); 
	gets(s);
	char *p=s+pos-1;
	for(int i=0;i<len;i++)
	printf("%c",*(p++));
	return 0;
 } 
