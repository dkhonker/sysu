#include <stdio.h>
#include <string.h>

main(){
	int len_a,len_b,i;
	char a[20001],b[20001],c[40002];
     gets(a);gets(b);
     len_a=strlen(a);len_b=strlen(b);
     for(i=0;i<len_b;i++)
           a[i+len_a]=b[i];
     a[len_a+len_b]='\0';
     puts(a);
	
	
}
