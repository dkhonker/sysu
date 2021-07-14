#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,t=0;
	char a1[10000],a2[10000];
	scanf("%d %d\n",&i,&j);
	gets(a1);
	for(int k=i-1;k<i+j-1;k++)
	{
		a2[t]=a1[k];
		t++;
	}
	a2[t]='\0';
	puts(a2);
	return 0;
} 
