#include<stdio.h>
#include<string.h>
int main()
{
	int pos,len;
	int i;
	scanf("%d %d\n",&pos,&len);
	char a[20001],b[20001];
	gets(a);
	for(i=0;i<len;)
	{b[i++]=a[pos-1];
	pos++;}
puts(b);
return 0;
}
