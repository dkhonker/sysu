#include <iostream>
#include <string.h>
#define N 20001
int main()
{
	char a[N],b[N],*T;
	gets(a);
	gets(b);
	T=strcat(a,b);
	puts(T);
	return 0;
}
