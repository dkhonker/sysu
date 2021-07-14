#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s1[20001];
	gets(s1);
	char s2[20001];
	gets(s2);
	int i;
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
		{
			printf("1");
		}
		if(s1[i]<s2[i])
		{
			printf("-1");
		}
	}
	if(s1[--i]==s2[--i])
	printf("0");
	return 0;
}
