#include<stdio.h>
#include<string.h>	

	int main(){
	int comp(char a[],char b[]);
	char a[20001],b[20001];
	gets(a);
	gets(b);
	printf("%d",comp(a,b));
	return 0;
	}
int comp(char a[],char b[]){
	int i;
	for (i=0;i<strlen(a)&&i<strlen(b);i++){
		if (a[i]-b[i]>0)
		return 1;
		if (a[i]-b[i]<0)
		return -1;}
		if (strlen(a)>strlen(b))
		return 1;
		else if (strlen(a)<strlen(b))
		return -1;
		else 
		return 0;
}
