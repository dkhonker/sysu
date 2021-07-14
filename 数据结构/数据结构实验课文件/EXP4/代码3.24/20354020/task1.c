#include<stdio.h>
#include<string.h>
int main()
{
	#define N 20000
	#define M 40000
	char a[N],b[N],c[M];
	int i=0,j=0;
	gets(a);
	gets(b);
	while(a[i]!='\0'){
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0'){
		c[i]=b[j];
		j++;
		i++; 
	}
	puts(c);
	return 0;
}

