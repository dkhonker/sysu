#include<stdio.h>
#include<cstring>

char s1[20001],s2[20001];
int r;

int main()
{
	gets(s1);
	gets(s2);
	
	if (strcmp(s1,s2)>0)
		r=1;
		else if (strcmp(s1,s2)==0)
			r=0;
			else
				r=-1;
	
	printf("%d",r);
	return 0;
	
}
