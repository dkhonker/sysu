#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[20000];
	int x=0,y=0;
	scanf("%d",&x);
	scanf("%d",&y);
	getchar();
	gets(a);
	for(int i=x-1;i<x+y-1;i++)
	{
		printf("%c",a[i]);
	}
}
