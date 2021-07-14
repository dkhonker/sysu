#include<stdio.h>
#include<string.h>
int main()
{	int m,n,i=0;
	scanf("%d",&m);
	scanf("%d",&n);
	getchar();
	char a[20001],b[20001];
	gets(a);
	for(;i<n;m++,i++)
	b[i]=a[m-1];
	puts(b);
	return 0;
 } 
