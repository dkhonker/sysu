#include<stdio.h>
#include<string.h>
const int maxsize = 20000;

int main(){
	char s1[maxsize],s2[maxsize];
	scanf("%s",s1);
	scanf("%s",s2);
	int t=0;
	for(int i =0;i<strlen(s1)+strlen(s2);i++)
	{
		if(s1[i] > s2[i])
		{
			return (printf("1"));
		}
		else if(s1[i] < s2[i])
		{
			return (printf("-1"));
		}
	}
	return(printf("0"));
} 
