#include<stdio.h>
int main(){
	char a[20001],b[20001];
	gets(a);
	gets(b);
	int n=0,m=0,k=0;
	for(int i=0;i<20001;i++){
		if(a[i]!='\0') n++;
		if(b[i]!='\0') m++;
		if(m>0&&n>0) break;
	}
	for(int i=0;i<n&&i<m;i++){
		if(a[i]!=b[i]){
			k=a[i]-b[i];
			break;
		}
		else k=n-m;
	}
	if(k<0) k=-1;
	if(k>0) k=1;
	printf("%d",k);
	return 0;
}
