#include<stdio.h>
#include<string.h>
int main()
{
	int max=20001,i,j,t=0,k;
	char a[max],b[max];	
	scanf("%d %d",&i,&j);
	getchar();
	gets(a);
	for(i,t;i<=j+1;i++,t++)
	{
		b[t]=a[i-1];
	}
    puts(b);
	return 0;
}
