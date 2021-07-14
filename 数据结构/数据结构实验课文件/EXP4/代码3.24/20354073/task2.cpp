#include<stdio.h>
#include<string.h>
int main()
{
	char a[20001];
	char b[20001];
	char c[40001];
	gets(a);
	gets(b);
	int i;
	for(i=0;i<strlen(a)+strlen(b);i++)
	{
		if(a[i]>b[i])
		{
		printf("1");
		break;
	}
	    if(a[i]<b[i])
	    {
		printf("-1");
	    break;
	}
	}
	return 0;

}
	
