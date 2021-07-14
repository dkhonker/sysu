#include <stdio.h>
int main(){
	int m,n,i,k=0;
	char a[20000],b[20000];
	scanf("%d %d\n",&m,&n);
	gets(a);
	for(i=m-1;i<m+n-1;i++){
		b[k]=a[i];
		k++;
	}
	printf("%s",b);
	return 0;	
}
