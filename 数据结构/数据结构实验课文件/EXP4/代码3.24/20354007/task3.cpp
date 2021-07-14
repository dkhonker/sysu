#include <stdio.h>
#include<string.h>
int main(){
	int pos,len;
	char s[20005],c[20001];
	scanf("%d%d",&pos,&len);
	scanf("%s",s);
	int j=0;
	for(int i=pos-1;i<pos+len-1;i++,j++){
		c[j]=s[i];
	}
	c[j]='\0';
	printf("%s",c);
	return 0;
	
	
}
