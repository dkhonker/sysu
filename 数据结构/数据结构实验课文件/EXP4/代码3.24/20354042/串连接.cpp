#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20001],arr2[20001],arr3[40002];
	int l1,l2; 
	scanf("%s",arr1);
	scanf("%s",arr2);
	l1=strlen(arr1);
	l2=strlen(arr2);
	for (int i=0;arr1[i]!='\0';i++)
	{
		arr3[i]=arr1[i];
	}
	for (int i=0;arr2[i]!='\0';i++)
	{
		arr3[l1+i]=arr2[i];
	}
	arr3[l1+l2]='\0';
	puts(arr3);
	return 0;
}
