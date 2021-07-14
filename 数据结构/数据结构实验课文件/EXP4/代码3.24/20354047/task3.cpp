#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char str[20000],str1[20000];
	int pos,len,i,a=0;
	scanf("%d%d",&pos,&len);
	scanf("%s",str);
	for(i=0;a<len;a++,i++,pos++)
		str1[i]=str[pos-1];
	puts(str1);	
}
