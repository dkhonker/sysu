#include<stdio.h>
int main(){
	char a[20001],b[20001];
	char c[40002];
	gets(a);
	gets(b);
	int n=0,m=0;
	for(int i=0;i<20001;i++){
		if(a[i]!='\0'){
			c[i]=a[i];
			n++;
		}	
	}
	for(int i=n;i<20001;i++){
		if(b[m]!='\0'){
			c[i]=b[m];
			m++;
		}
	}
	printf("%s",c);
	return 0;
} 
