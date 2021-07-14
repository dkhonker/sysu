#include<stdio.h>
#include<string.h> 
int main()
{
	char a[20000];
	char b[20000];
	//int i,j;
	char c[20001];
	scanf("%s",&a);
	scanf("%s",&b);
	for(int i=0;i<strlen(a);++i)
	{
		c[i]=a[i];
	}
	for(int i=0;i<strlen(b);++i)
	{
		c[strlen(a)+i]=b[i];
	}
	printf("%s",c);
	
}

