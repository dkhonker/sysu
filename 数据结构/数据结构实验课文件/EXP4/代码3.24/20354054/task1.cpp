#include <stdio.h>
#include <string.h>
char *comb(char str1[],char str2[])
{
	int a,b,i;
	char str3[40000];
	a=strlen(str1);
	b=strlen(str2);
	for(i=0;i<a;i++){
		str3[i]=str1[i];
	}
	for(i=a;i<a+b;i++){
		str3[i]=str2[i-a];
	}
	str3[i]='\0';
	return str3;
}
int main()
{
	char a[20000],b[20000];
	char *c;
	gets(a);
	gets(b);
	c=comb(a,b);
	for(int i=0;*c != '\0';i++)
		printf("%c",*c++);
	return 0;
}
