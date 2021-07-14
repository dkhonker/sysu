#include<stdio.h>
#include<string.h>
int main(){
	char a[20000];char b[20000];char c[40000];
    int i=0;int j=0;
    gets(a);
    gets(b);
    while(a[i]!='\0')
    {c[i]=a[i];
    i++;
	}
	while(b[j]!='\0')
	{c[i++]=b[j++];
	}
	c[i]='\0';
	puts(c);
} 
