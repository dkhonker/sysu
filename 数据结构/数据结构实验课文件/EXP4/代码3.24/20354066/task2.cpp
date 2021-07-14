#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000];
	char b[20000];
	gets(a);
	gets(b);
	for(int i=0;i<((strlen(a)>strlen(b))?strlen(b):strlen(a));i++)
	{
	if(a[i]>b[i])
	{
		putchar(49);
		return 0;
	}
	if(a[i]<b[i])
	{
		printf("-1");
		return 0;
	}
    }
	putchar(48);
	return 0;
 } 
