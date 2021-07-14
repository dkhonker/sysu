#include<stdio.h>
char s1[20000];
char s2[20000];
char s3[40000];
int main(){
	gets(s1);
	gets(s2);
	int i=0,j=0;
	while(s1[i]!='\0'){
		i++;
	}
	while(s2[j]!='\0'){
		j++;
	}
	int k;
	for(k=0;k<=i-1;k++){
		s3[k]=s1[k];
	}
	for(k=0;k<=j;k++){
		s3[i+k]=s2[k];
	}
	puts(s3);
	return 0;
}
