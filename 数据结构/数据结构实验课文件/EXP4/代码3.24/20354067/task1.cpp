#include<stdio.h>
#include<string.h>
int len=20001;
int main()
{
	char A[len],B[len],C[len*2] ;
	gets(A);
	gets(B);
	int i;
	for(i=0;i<strlen(A);i++)
	C[i]=A[i];
	for(i=0;i<strlen(B);i++)
	C[i+strlen(A)]=B[i];
	puts(C);
 } 
