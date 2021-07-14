#include<stdio.h>
#include<string.h>
const int maxsize = 20000;

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	char s[maxsize];
	scanf("%s",s);
	for(int i=a-1;i<a+b-1;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
