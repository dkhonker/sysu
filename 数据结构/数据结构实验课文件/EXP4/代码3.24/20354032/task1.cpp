#include<stdio.h>

char a[20001];
char b[20001];
char c[40002];
int main()
{
	int t = 0;
	gets(a);
	gets(b);
	for(int i = 0;a[i]!='\0';i++)
	{
		c[i] = a[i];
		t = i+1;
	} 
	for(int j = 0;b[j]!='\0';j++)
	{
		c[t+j] = b[j];
	}
	puts(c);
} 

