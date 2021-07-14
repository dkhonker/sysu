#include <iostream>
#include <string.h>
#define N 20001
int main()
{
	char a[N],b[N];
	int c=0;
	gets(a);
	gets(b);
	if(strcmp(a,b)<0)printf("1");
	else if(strcmp(a,b)==0)printf("0");
	else printf("-1");
	return 0;
}
