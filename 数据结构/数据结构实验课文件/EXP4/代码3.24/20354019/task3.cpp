#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20001];
	char str2[20001];
	int m;
	int n;
	scanf("%d%d",&m,&n);
	getchar();
	int j=0;
	gets(str1);
	for(int i=m-1;i<m-1+n;i++)
	{
	str2[j]=str1[i];j++;}
	for(int p=0;p<strlen(str2);p++)
	{
	  printf("%c",str2[p]);}
}
