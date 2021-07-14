#include<stdio.h>
#include<string.h>
int main(){
	char a[20001],b[20001],c[40001];
	scanf("%s",a);
	scanf("%s",b);
	int i=0;
	for(;i<strlen(a);i++){	
		c[i]=a[i];
	}
	for(int j=0;j<strlen(b);j++,i++){
		c[i]=b[j];	
	}
	c[i]='\0';
	printf("%s",c);
	return 0;
	
	
} 
