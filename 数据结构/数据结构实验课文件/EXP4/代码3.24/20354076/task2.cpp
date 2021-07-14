#include <stdio.h>
#include<string.h> 
int main(){
	char a[20001],b[20001],c[40001];
	int i=0;
	int h=0;
	gets(a);
	gets(b);
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]>b[i]) {
			h=1;break;
		}
		if(a[i]<b[i]) {
			h=-1;break;
		}
		i++;
	}
	if(strlen(a)>strlen(b)) h=1;
	else if(strlen(a)<strlen(b)) h=-1;
	else h=0;
	printf("%d",h);
	return 0;
}
	
