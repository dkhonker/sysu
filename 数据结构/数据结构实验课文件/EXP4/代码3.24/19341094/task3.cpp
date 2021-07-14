#include<stdio.h>

int main(){
	
	int pos,len;
	char s[20000];
	
	scanf("%d%d",&pos,&len);
	getchar();
	gets(s);
	
	for(int i=pos-1;i<20000 && len > 0;i++){
		putchar(s[i]);
		len--;
	}
}
