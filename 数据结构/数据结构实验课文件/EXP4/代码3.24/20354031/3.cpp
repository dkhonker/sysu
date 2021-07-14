#include<stdio.h>
#include<string.h> 
#define M 20000
int main(){
	char a[M],b[M];
	int i,j,pos,len;
	scanf("%d%d",&pos,&len);
	getchar();
	for(i=0;;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n'){
			a[i]='\0';
			break;
		}
	}
	if(pos+len-1>i)printf("数据非法");
	for(i=0;i<len;i++){
		b[i]=a[i+pos-1];
	}
	puts(b);
} 
