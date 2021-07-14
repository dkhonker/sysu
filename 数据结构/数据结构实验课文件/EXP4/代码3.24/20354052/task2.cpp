#include <stdio.h>
#include <string.h>
#define max 20000

int main()
{
	char a[max+1],b[max+1];
	int i=0,y=1,n=-1,x=0;
	gets(a);
	gets(b);
	int L(char a[],char b[]);
	for(i=0;i<=L(a,b);i++)
	{
		if(a[i]>b[i])
		{
			printf("%d\n",y);
			return 0;
		}
		if(a[i]<b[i])
		{
			printf("%d\n",n);
			return 0;
		}
		if(a[i]=b[i])
		{
			continue;
		}
	}
	return 0;
}

int L(char a[],char b[])
{
	if (strlen(a)>strlen(b));
	return strlen(b);
	if (strlen(a)<=strlen(b));
	return strlen(a);
}
