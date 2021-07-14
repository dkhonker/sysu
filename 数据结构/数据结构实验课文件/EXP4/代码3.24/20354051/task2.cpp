#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[20001],arr2[20001];
	scanf("%s",arr1);
	scanf("%s",arr2);
	int a1=0,a2=0;
	for(int i=0;i<strlen(arr1);i++)
	a1+=arr1[i];
	for(int i=0;i<strlen(arr2);i++)
	a2+=arr2[i];
	if(a1==a2)
	printf("0");
	else if(a1>a2)
	printf("1");
	else printf("-1");
}
