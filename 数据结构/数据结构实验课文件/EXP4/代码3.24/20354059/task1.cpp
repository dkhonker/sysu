#include<stdio.h>
int main()
{
	char a[20001],b[20001],c[40001];
	int i=0,j=0;
	gets(a);
	gets(b);
	while(a[i]!='\0'){
	    c[j++]=a[i++];
	}
	i=0;
	while(b[i]!='\0'){
	    c[j++]=b[i++];
	}
    c[j]='\0';
    puts(c);
    return 0;
	
}
