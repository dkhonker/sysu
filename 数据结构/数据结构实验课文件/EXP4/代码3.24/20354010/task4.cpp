#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	getchar();
	char c[2];
	char s[a];int i=0;int t=0;int j=0;
	for (i=1;i<=b;i++)
	{
	gets(c);
	if(c[1]==1)
	{s[t]=c[2];t++;}
	else
	for (j=0;j<=t-1;j++)
	s[j]=s[j+1];
	}
	puts(s);
	return 0;
 } 
