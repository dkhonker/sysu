#include <stdio.h>
#include <string.h>
int strcmp(char str1[],char str2[])
{
	int a,b,flag=0;
	a=strlen(str1);
	b=strlen(str2);
	for(int i=0;i<a && i<b;i++){
		if(str1[i] > str2[i]) {
			flag=1;
			break;
		}
		else if(str1[i] = str2[i]) continue;
		else {
			flag=-1;
			break;
		}
	}
	if(!flag){
		if(a>b) flag=1;
		else if(a<b) flag=-1;
		else flag=0;
	}
	return flag;
 }
 int main() 
 {
 	char a[20000],b[20000];
 	gets(a);
 	gets(b);
 	int c=strcmp(a,b);
 	printf("%d",c);
 	return 0;
 }
