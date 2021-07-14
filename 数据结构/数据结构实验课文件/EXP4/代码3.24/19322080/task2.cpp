#include<stdio.h>
#define size 20000
int main(){
	char a[size];
	char b[size];
	gets(a);
	gets(b);
	int i=0,f=0;
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]==b[i]){
			i++;
		}
		else if(a[i]>b[i]){
			f=1;
			break;
		}
		else{
			f=-1;
			break;
		}
	}
	if(f==0){
		if(a[i]=='\0'&&b[i]=='\0'){
			f=0;
		}
		else{
			f=a[i]==0?-1:1;
		}
	}
	printf("%d",f);
	return 0;
	
}
