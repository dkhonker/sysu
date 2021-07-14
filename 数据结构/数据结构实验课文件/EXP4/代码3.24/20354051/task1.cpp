#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[20001],arr2[20001],arr3[40001];
	scanf("%s",arr1);
	scanf("%s",arr2);
	strcpy(arr3,arr1);
	for(int i=0,j=strlen(arr1);i<strlen(arr2);++i,++j)
		arr3[j]=arr2[i];
	puts(arr3);
 } 
