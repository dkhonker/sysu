#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20001],str2[20001],str3[40002];int i=0,flag=0;
	gets(str1);
	gets(str2);
	while((str1[i]!='\0')&&(str2[i]!='\0')){
	    if(str1[i]>str2[i]){flag=1;break;}
	    if(str1[i]<str2[i]){flag=-1;break;}
	    i++;
	}
	printf("%d",flag);
	return 0;
}
