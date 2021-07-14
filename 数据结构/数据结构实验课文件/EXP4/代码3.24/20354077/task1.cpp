#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    char sen1[20001],sen2[20001],sen3[40004];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	gets(sen1);
	gets(sen2);
	int i,j;
	for(i=0;i<strlen(sen1);i++)
	sen3[i]=sen1[i];
	for(j=0;j<strlen(sen2);j++)
	sen3[j+i]=sen2[j];
	for(i=0;i<strlen(sen1)+strlen(sen2);i++)
	printf("%c",sen3[i]);
	return 0;
}
