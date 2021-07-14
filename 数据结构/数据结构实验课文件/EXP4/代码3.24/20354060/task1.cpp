#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int maxn=20001; 

int main() {
	char a[maxn];
    char b[maxn];
    char c[2*maxn];
	gets(a);
	gets(b);
	int i=0;
	int j=0;
	while (a[i]!='\0'){
	
	c[i]=a[i];
	i++;
}
	while (b[j]!='\0')
	{
	
	c[i++]=b[j];
	j++;
}
    c[i]='\0';
	puts(c);
	return 0;

}
