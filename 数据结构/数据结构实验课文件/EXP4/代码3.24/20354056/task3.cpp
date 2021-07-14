#include<stdio.h>
#include<string.h>	
int main(){
	int n,m;
	char s[20001],a[20001];
	scanf("%d %d\n",&n,&m);
	gets(s);
	int i=0;
	while(i<m){
		a[i]=s[n-1];
		i++;
		n++;
	}
	puts(a);
	return 0;
}

