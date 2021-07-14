#include <stdio.h>
#include <string.h>
void cat(char a[],char b[])
{
	int i,j;
	i=strlen(a)-1;
	for(j=0;j<strlen(b);j++)
		a[i+j+1]=b[j];
	a[i+j+1]='\0';
 } 
 int main(){
 	char a[40002],b[20001];
 	gets(a);
 	gets(b);
 	cat(a,b);
 	puts(a); 
	return 0;
 	
 }
