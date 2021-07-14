#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int pos,len,lenth=0,i=0;
	scanf("%d",&pos);
	scanf("%d",&len);
	char s[19999],sub[19999];
	getchar();
	gets(s);
	while(s[i]!='\0'){
		lenth++;
		i++;
	}
		if(pos<0||pos>lenth||len<0||len>lenth-pos+1) {
		printf("error");
		return 0;
	}
	else 
	{
		for(int j=0;j<len;j++){
			sub[j]=s[pos+j-1];
		}
	}
	printf("%s",sub);
	return 0;
}
