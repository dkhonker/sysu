#include<stdio.h>
#include<string.h>
int main()
{
	int pos=0,len=0,cou=0;
	char str[20001],s[20001];
	scanf("%d%d",&pos,&len);
	getchar();
    gets(str);
	for(int i=pos-1;(i<strlen(str))&&(cou<len);i++)
	{
		
		s[cou++]=str[i];
		
	}
	puts(s);
	
 } 
