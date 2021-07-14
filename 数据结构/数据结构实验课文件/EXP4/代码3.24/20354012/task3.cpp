#include<stdio.h>
#include<string.h>
#define  MAX  20001
char a[MAX];
int main()
{
	int pos,len;
	scanf("%d %d",&pos,&len);
	getchar();
	gets(a);
	for(int i = pos;i<pos+len;i++)
	printf("%c",a[i-1]);
	return 0;
	
}

