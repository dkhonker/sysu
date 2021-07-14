#include<stdio.h>
#include<string.h>
int main()
{
	char S[20001];
	int pos,len;
	scanf("%d%d",&pos,&len);
	scanf("%s",S);	
	for(int i = pos - 1;i < pos + len - 1;i++){
		printf("%c",S[i]);
	}
	return 0;
} 
