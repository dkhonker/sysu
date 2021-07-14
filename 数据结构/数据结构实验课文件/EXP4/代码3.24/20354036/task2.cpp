#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	int maxn = 20000,m,n,i=0,j=0;
	char str1[maxn+1];
	char str2[maxn+1];
	char str3[maxn * 2 + 1];
	gets(str1);
	gets(str2);
	m=strlen(str1);
	n=strlen(str2);
	while(i<=m||j<=n) {
		if(str1[i]=str2[j]) {
			i++;
			j++;
			
		}
		else if(str1[i]>str2[j]){
			printf("1");
			break;
		}
		else printf("-1");
		break;
	}
	printf("0");
	return 0;
}
