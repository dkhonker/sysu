#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20001],str2[20001],str3[40002];int i=0,j=0;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0'){
	  str3[i]=str1[i];i++;
	}
	while(str2[j]!='\0'){
	str3[i++]=str2[j++];
	}
    puts(str3);
	return 0;
}
