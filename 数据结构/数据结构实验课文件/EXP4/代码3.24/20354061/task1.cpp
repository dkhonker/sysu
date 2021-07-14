#include<stdio.h>
int main()
{
	char a[20000];
	char b[20000];
	int i=0,j=0,k=0,m=0;
	gets(a);
	gets(b);
	while(a[i]!='\0')
	{
		i++;
		k++;
	}
	while(b[j]!='\0')
	{
		j++;
		m++;
	}
	for(i=0;i<=k+m;i++)
	{
		a[i+k]=b[i];
	}
	puts(a);
	return 0;
}
