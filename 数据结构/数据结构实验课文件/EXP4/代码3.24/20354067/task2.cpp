#include<stdio.h>
#include<string.h>
int len=20001;
int main()
{
	char A[len]={'\0'},B[len]={'\0'};
	gets(A);
	gets(B);
	int i;
	for(i=0;i<strlen(A)&&i<strlen(B);i++)
{

	if(A[i]>B[i])printf("1") ;
	else if(A[i]<B[i])return -1;
}
	if(strlen(A)>strlen(B))printf("1") ;
	else if(strlen(A)<strlen(B))printf("-1") ;
	else if(strlen(A)==strlen(B))printf("0") ;
}
