#include<stdio.h>
int main(){
	char a[20001];
	int pos,len;
	scanf("%d %d",&pos,&len);
	scanf("%s",&a);
	for(int i=pos-1;i<pos+len-1;i++){
		printf("%c",a[i]);
	}
	return 0;
}
