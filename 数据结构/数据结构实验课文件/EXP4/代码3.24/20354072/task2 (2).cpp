#include<stdio.h>

int main()
{char a[20001];
char b[20001];
char c[40001];
gets(a);
gets(b);

int i=0,j=0;
while(a[i]!='\0'){
	c[i]=a[i];
	i++;
}
while(b[j]!='\0')
	c[i++]=b[j++];
	c[i]='\0';
	puts(c);
return 0;
 } 
