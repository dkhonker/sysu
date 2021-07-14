#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char str1[20000],str2[20000];
	int i,a=0;
	gets(str1);
	gets(str2);
	for(i=0;a==0 && str1[i]!='\0' && str2[i]!='\0';i++)
	{
		if(str1[i]>str2[i])
		   a=1;
		else if(str1[i]<str2[i])
		    a=-1;
		else
		    continue;	
	}
	printf("%d\n",a);
}
