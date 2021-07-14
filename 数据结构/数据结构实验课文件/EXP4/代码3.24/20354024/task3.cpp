#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	char c[20000];
	scanf("%s",&c);
	int i;
	for (i=a;i<(a+b);i++)
	printf("%c",c[i-1]);
}
