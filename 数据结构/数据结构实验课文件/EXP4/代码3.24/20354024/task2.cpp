#include<stdio.h>
int main()
{
	char a[20000],b[20000];
	scanf("%s",&a);
	scanf("%s",&b);
	int i,flag=0;
	for ( i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if (a[i]==b[i]){ flag=1;}
		if (a[i]>b[i]){printf("1");flag=0;break;}
		if (a[i]<b[i]){printf("-1");flag=0;break;}
	}
	if (flag=1)
	{
		if(a[i]=='\0'&&b[i]!='\0') printf("-1");
		else if(b[i]=='\0'&&a[i]!='\0') printf("1");
		else printf("0");
	}
}
