#include<stdio.h>
int main()
{
	char str1[20001], str2[20001], cat[40002];
	int i=0,j=0;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0')
	{
		cat[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0')
	{
		cat[i]=str2[j];
		i++;
		j++;
	}
	puts(cat);
}
