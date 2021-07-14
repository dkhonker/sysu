#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000],b[20000],c[20000];
	int i,j,k;
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++)
	    c[i]=a[i];
    for(j=0;j<strlen(b);j++,i++)
        c[i]=b[j];
    printf("%s",c);
    return 0;
}

