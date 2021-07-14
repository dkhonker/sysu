#include<stdio.h>
char a[20000];
char b[20000];
char s[40000];
int main(){
	int i,j;
	gets(a);
	gets(b);
	while(a[i]!='\0'){
		i=i+1;
	}
	while(b[j]!='\0'){
		j++;
	}
	if(i>j){
		int k;
		for(k=0;k<i;k++){
			if(a[k]>b[k]){
				printf("1");
				return 0;
			}
			if(a[k]<b[k]){
				printf("-1");
				return 0;
			}
			else continue;
		}
	}
	else if(i<j){
		int k;
		for(k=0;k<j;k++){
			if(a[k]>b[k]){
				printf("1");
				return 0;
			}
			if(a[k]<b[k]){
				printf("-1");
				return 0;
			}
			else continue;
		}
	}
	else {
		int k;
			for(k=0;k<j;k++){
			if(a[k]>b[k]){
				printf("1");
				return 0;
			}
			if(a[k]<b[k]){
				printf("-1");
				return 0;
			}
			else continue;
	}
	if(k==j) printf("0");
}
	return 0;
}
