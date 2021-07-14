#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20001],arr2[20001];
	int m;
	gets(arr1);
	gets(arr2);
	m=strcmp(arr1,arr2);
	if (m>0) printf("1");
	else if(m<0) printf("-1");
	else if (m==0) printf("0");
}
