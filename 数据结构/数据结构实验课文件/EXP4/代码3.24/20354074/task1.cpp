#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[20000],b[20000];
	int x=0;
	gets(a);
	gets(b);
	for(int i=0;i<20000;i++)
	{
	if(a[i]!=b[i])
	{
	if(a[i]>b[i]){printf("1");break;}
	else {printf("-1");break;}
	}
	if(a[i]=='\0'||b[i]=='\0')
	{
	if(a[i]=='\0'&&b[i]!='\0')
	{printf("-1");break;}
	if(a[i]!='\0'&&b[i]=='\0')
	{printf("1");break;}
	if(a[i]=='\0'&&b[i]=='\0')
	{printf("0");break;}
	}
	}
}
