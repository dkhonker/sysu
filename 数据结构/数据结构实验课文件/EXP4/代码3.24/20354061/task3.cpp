#include <stdio.h>
int main()
{
	char S[20000];
	int pos=0,len=0;
	int i=0;
	scanf("%d",&pos);
	scanf("%d",&len);
    gets(S);
	for(i=pos-1;i<=pos+len-1;i++)
	{
		printf("%s",S[i]);
	}
	return 0;
}
