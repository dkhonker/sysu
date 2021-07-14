#include<stdio.h>
#include<string.h>
int main()
{
	char S1[20000],S2[20000];
	int i;
	gets(S1);
	gets(S2);
	for(i = 0;i < strlen(S1) && i < strlen(S2);i++)
	{
		if(S1[i] > S2[i]) printf("1");
		else if(S1[i] < S2[i]) printf("-1");
	}
	if((strlen(S1) == strlen(S2))&&(i = strlen(S1))) printf("0");
} 
