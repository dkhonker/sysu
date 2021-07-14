#include<stdio.h>
#include<string.h>
int main()
{
	char S[20000],S1[20000],S2[20000];
	gets(S1);
	gets(S2);
	for(int i = 0;S1[i] != '\0';i++){
		S[i] = S1[i];
	}	
	for(int j = 0;S2[j] != '\0';j++){
		S[strlen(S1)+j] = S2[j];
	}
	puts(S);
	return 0;	
} 
