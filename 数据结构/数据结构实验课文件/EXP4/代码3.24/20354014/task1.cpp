#include <stdio.h>
int main()
{int i=0;int maxn=20000;
    char a[maxn]={'\0'},b[maxn]={'\0'},c[2*maxn+1]={'\0'}; 
	 gets(a);gets(b);
	for(i=0;(i<=maxn)&&(a[i]!='\0');i++)
	{c[i]=a[i];}
	for(int n=0;n<=maxn;n++,i++)
	{
		c[i]=b[n];
	}
	printf("%s",c);
	return 0;
}
