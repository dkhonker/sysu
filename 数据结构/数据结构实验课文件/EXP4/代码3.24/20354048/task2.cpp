#include<stdio.h>
int main()
{
	char s1[20001],s2[20001];
	scanf("%s",s1);
	scanf("%s",s2);
	int i=0,j=0;
	while(s1[i]!='\0'&&s2[j]!='\0')
	{
		if(s1[i]>s2[j])
		{
			printf("1");
			return 0;
		}
		else if(s1[i]<s2[j])
		{
			printf("-1");
			return 0;
		}
		else{
			i++;
			j++;
		}
	}
	if(s1[i]=='\0'&&s2[j]=='\0')
	{
		printf("0");
	}
	else if(s1[i]!='\0'&&s2[j]=='\0')
	{
		printf("1");
	}
	else
	{
		printf("-1");
	}
	return 0;
 } 
