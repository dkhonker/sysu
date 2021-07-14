#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	char b[20001],c[20001];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pos,len,i;
	scanf("%d %d",&pos,&len);
	gets(b);
	gets(b);
    int w;
    w=pos-1;
    for(i=0;i<len;i++)
    c[i]=b[w+i];
    printf("%s",c);
	return 0;
}
