#include<stdio.h> 
main()
{
	char str1[20000];
	char str2[20000];
	char str3[40000];
	int i=0;
	int j=0;
	int q=0;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0') i++;
	while(j<i) 
	{
	str3[j]=str1[j];
	j++;
	}
	while(str2[q]!='\0') 
	{
	str3[j]=str2[q];
	q++;
	j++;
	}
	str3[j]='\0';
	puts(str3);
	
	
}
