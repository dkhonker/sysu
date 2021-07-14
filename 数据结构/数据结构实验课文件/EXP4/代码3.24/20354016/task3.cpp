#include <iostream>
#include <string.h>
#define N 20001
int main()
{
	char a[20001];
	int w,v,m;
	p=a;
	scanf("%d %d",&w,&v); 
	scanf("%s",a);
	m=strlen(a);
	if(v<=(m-w+1)||v>=1)
	{
	for(int i=1;i<=v;i++)
	{
	printf("%s",a[w]);
	a[w]=a[w+1];}
	}
	else
	printf("ERROR!");
	return 0;
}
