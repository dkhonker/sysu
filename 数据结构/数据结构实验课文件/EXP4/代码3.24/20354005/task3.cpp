#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pos,len;
	char a;
	scanf("%d %d",&pos,&len);
	scanf("%c",&a);
	char s[20001];
	gets(s);
	char s1[20001];
	int k=0;
	for(int i=pos-1;i<pos-1+len;i++)
	{
			s1[k]=s[i];
			k++;
	}
    puts(s1);
	return 0;
}

