#include<stdio.h>

int main(){
	
	char a[20000],b[20000];
	int i;
	
	gets(a);
	gets(b);
	
	for(i=0;a[i]!='\0' && b[i]!='\0';i++){
		if(a[i]!=b[i]){
			if(a[i] >= b[i])
				printf("1");
			else if(a[i] <= b[i])
				printf("-1");
			break;
		}
		else if(a[i] == b[i])
			continue;
	}
	
	if(a[i] =='\0' && b[i] != '\0') 
		printf("1");
	else if(b[i] == '\0' && a[i] != '\0')
		printf("-1");
	else if(a[i] == '\0' && b[i] == '\0')
		printf("0");
}
