#include <stdio.h>
#include <string.h>
char *substr(int a,int b,char str1[])
{
	int i=a-1;
	char str[20000];
	for(int j=0;j<b;j++){
		str[j]=str1[i++];
	}
	return str;
}
int main()
{
	int a,b;
	char s[20000];
	char *t;
	scanf("%d %d",&a,&b);
	scanf("%s",s);
	t=substr(a,b,s);
	for(int i=0;i<b;i++){
		printf("%c",*t++);
	}
	return 0;
}
