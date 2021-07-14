#include<stdio.h>

main(){
	char s[20000],c[20000];
	int pos,len,i;
	scanf("%d %d",&pos,&len);
    scanf("%s",s);
	for(i=0;i<len;i++)
	   c[i]=s[pos-1+i];
	c[len]='\0';
	puts(c);
}
