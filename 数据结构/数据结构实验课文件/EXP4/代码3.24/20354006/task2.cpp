#include<stdio.h>
#include<string.h>
int main()
{	char a[20001],b[20001];
	gets(a);
	gets(b);
	for(int i=0;i<=strlen(a)-1||i<=strlen(b)-1;i++)
	{
	if(a[i]==b[i])
		continue;
	else if(a[i]>b[i])
		{
		printf("1");
		return 1;
	}
	else if(a[i]<b[i]);
		printf("-1");
		return -1;
	}
	printf("0");
	return 0;
 } 
