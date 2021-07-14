#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s1[20000];
	gets(s1);
	char s2[20000];
	gets(s2);
	char s[40000];
	int i,k;
    for(i=0;s1[i]!='\0';i++)
    s[i]=s1[i];
     for(k=0;s2[k]!='\0';k++)
    s[i+k]=s2[k];
    for(int m=0;m<k+i;m++)
    printf("%c",s[m]);
    
	return 0;
}
