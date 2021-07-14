#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int maxn = 20000,m,n,i=0,j=0;
	char str1[maxn+1];
	char str2[maxn+1];
	scanf("%d%d/n",m,n) ;
	gets(str1);
	for(i=m;i<m+n;i++){
		str2[j]=str1[i];
		j++;
	}
	puts(str2);
	return 0;
}
