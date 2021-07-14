#include<stdio.h>
#include<string.h>
const int maxsize = 20000;

int main()
{
	char s1[maxsize],s2[maxsize];
	scanf("%s",s1);
	scanf("%s",s2);
	char s3[maxsize*2];
	for(int i=0;i<strlen(s1)+strlen(s2);i++)
	{
		if(i<strlen(s1))
		{
			s3[i] = s1[i];
		}
		else s3[i] = s2[i-strlen(s1)];
	}
	printf("%s",s3);
	return 0;
} 
