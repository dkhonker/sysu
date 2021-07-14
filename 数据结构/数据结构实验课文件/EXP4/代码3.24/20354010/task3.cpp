#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	getchar();
	char s[20001];
	gets(s);
	char d[20001];
	int i=1;
    for (;i<=b;i++)
    d[i-1]=s[a+i-2];
    puts(d);
	return 0;
}

