#include<iostream>
#include<stdio.h>
#include<string.h>
int s(char a[20000],char b[20000]){
	int i;
	for(i=0;a[i]!=0;){
		if(a[i]==b[i]){
			i++;
		}
		else if(a[i]<b[i])return -1;
		else return 1;
	}
	if(a[i]==0&&b[i]==0)return 0;
	else return -1;
}



int main(){
	char a[20000],b[20000];
	gets(a);
	gets(b);
	printf("%d\n",s(a,b));
} 
