#include <stdio.h> 
#include <string.h>
int main()
{
	char str1[20001],str2[20001],str[40002];
	int x=-2;
	gets(str1);
	gets(str2);
	int len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	int i;
	i=0;
	while(str1[i]!='\0')
	{
		str[i]=str1[i];
		i++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		str[i+len1]=str2[i]; 
		i++;
	}
	str[len1+len2]='\0';
	printf("%s\n",str);
	printf("%d",strlen(str)); 
}
