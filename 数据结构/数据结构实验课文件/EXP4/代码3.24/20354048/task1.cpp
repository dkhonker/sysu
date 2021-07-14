#include<stdio.h> 
int main()
{
	char s1[20001],s2[20001];
	scanf("%s",s1);
	scanf("%s",s2);
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	i=0;
	printf("%s",s1);
	return 0;
}
