#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000],b[20000];
	int i,c;
	gets(a);
	gets(b);
	c=0;
    for(i=0;i<strlen(a)||i<strlen(b);++i)
        if(a[i]!=b[i])
            c=c+a[i]-b[i];
    printf("%d",c);
    return 0;
} 
