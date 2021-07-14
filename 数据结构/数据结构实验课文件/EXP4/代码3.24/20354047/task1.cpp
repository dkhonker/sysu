#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char str1[20000],str2[20000];
	int i,a;
	gets(str1);
	gets(str2);
	a=strlen(str1);
	for(i=0;str2[i]!='\0';i++)
	{
		str1[a]=str2[i];
	    a++;
	}
	puts(str1);
	return 0;
}
