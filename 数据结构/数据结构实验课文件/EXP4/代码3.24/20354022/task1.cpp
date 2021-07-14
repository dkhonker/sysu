#include<stdio.h>
#include<string.h>

char s1[20001],s2[20001];

int main()
	{
		gets(s1);
		gets(s2);
		printf("%s",strcat(s1,s2));
		return 0;
	}
 
