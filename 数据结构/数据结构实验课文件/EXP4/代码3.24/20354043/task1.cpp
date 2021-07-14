#include <stdio.h>
int main(){
	char a[20000];
	char b[20000];
	int i=0,j=0;
	gets(a);
	gets(b);
	char c[20000];
	while(a[i]!='\0'){
	c[i]=a[i];
	i++;	
	}
	while(b[j]!='\0'){
		c[i]=b[j];
		i++,j++;
	}
	printf("%s\n",c);
	return 0;
}
