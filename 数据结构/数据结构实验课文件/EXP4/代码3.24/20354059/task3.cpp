#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,i;
	char a[20001],b[20001];
	scanf("%d %d\n",&x,&y);
	gets(a);
	x=x-1;
	for(i=0;i<y;)
	{
		b[i++]=a[x++];
	}
    b[i]='\0' ;
	puts(b);
	return 0;
}
