#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000],b[20000];
	int m,n,i;
	scanf("%d %d",&m,&n);
	scanf("%s",&a);
	for(i=0;i<n;i++)
	{
		b[i]=a[m-1];
		m++;
	}
	puts(b);
}
