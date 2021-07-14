#include<stdio.h>
int main()
{
	char a[20000],b[20000],c[40000];
	gets(a);
	printf("\d");
	gets(b);
	c[1..a[0]]=a[1..a[0]];
	c[a[0]+1..a[0]+b[0]]=b[1..b[0]];
	c[0]=a[0]+b[0];
	printf("%s",c);
	return 0;
}
