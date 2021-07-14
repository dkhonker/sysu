#include<stdio.h>
int main()
{
	int pos,len;
	char s[20001],t[20001];
	scanf("%d %d",&pos,&len);
	scanf("%s",&s);
	for(int i = pos-1;i<=pos+len-2;i++)
	{
		t[i-pos+1] = s[i];
	}
	printf("%s",t);
} 
