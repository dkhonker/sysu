#include<stdio.h>
#include<string.h>
int main()
{
	char str[20001], sub[20001];
	int pos,len;
	scanf("%d%d",&pos,&len);
	scanf("%s",str);
	for(int i=0;i<len;i++)
	sub[i]=str[pos-1+i];
	puts(sub);
}
