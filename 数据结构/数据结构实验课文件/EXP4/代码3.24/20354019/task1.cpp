#include<stdio.h>
int main()
{
	char str1[20001];
	char str2[20001];
	char str3[40001];
	gets(str1);
	gets(str2);
	int j=0;
	for(int i=0;str1[i]!='\0';i++)
	{str3[j]=str1[i];j++;}
	for(int i=0;str2[i]!='\0';i++)
	{str3[j]=str2[i];j++;}
    for(int i=0;i<j;i++)
    printf("%c",str3[i]);
 } 
