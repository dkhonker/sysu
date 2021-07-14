#include <stdio.h>
#include <string.h>
int main()
{
	char a1[10000],a2[10000];
	gets(a1);
	gets(a2);
	if(strcmp(a1,a2)>0)
	printf("1");
	if(strcmp(a2,a1)>0)
	printf("-1");
	if(strcmp(a1,a2)==0)
	printf("0");
	return 0;
}
