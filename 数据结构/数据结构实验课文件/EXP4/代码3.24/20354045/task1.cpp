#include<stdio.h>
#include<string.h>
int N = 20001;
int main()
{
	char a[N],b[N];
	gets(a);
	gets(b);
	printf("%s",strcat(a,b));
	return 0;
}
