#include<stdio.h>
#define size 20000
int main(){
	int start,len;
	scanf("%d",&start);
	scanf("%d",&len);
	char a[size];
	char b[size];
	getchar();
	gets(a);
	char*st;
	st=a+start-1;
	int i;
	for(i=0;i<len;i++){
		b[i]=*(st+i);
	}
	b[i]='\0';
	printf("%s",b);
	return 0;
}
