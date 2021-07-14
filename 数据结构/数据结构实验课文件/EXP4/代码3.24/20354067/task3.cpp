#include<stdio.h>
#include<string.h>
int max=20001;
int main()
{
	int pos,len;
	char S[max]={'\0'},s[max];
	scanf("%d%d",&pos,&len);
	getchar();
	gets(S);
	for(int i=pos-1;i<=pos+len-2;i++)
	s[i-pos+1]=S[i];
	puts(s);
}
