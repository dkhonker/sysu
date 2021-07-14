#include<stdio.h>
int main()
{
	char s[20001];
	int pos,len,i,j=0;
	scanf("%d%d",&pos,&len);
	scanf("%s",s);
	i=pos-1;
	for(;j<len;i++,j++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
