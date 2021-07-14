#include<stdio.h>
int main()
{
	char a[20001];
	char b[20001];
	char c[40001];
	int i=0,j=0;
	gets(a);
	gets(b);
	for(;a[i]!='\0';i++)
	     c[i]=a[i];
    for(;b[j]!='\0';i++,j++)
         c[i]=b[j];
	puts(c);
	return 0;
}
