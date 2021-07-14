#include<stdio.h>
int main()
{
	char arr[20000],subarr[20000];
	int pos,len;
	scanf("%d",&pos);
	scanf("%d",&len);
	scanf("%s",arr);
	for (int i=0;i<len;i++)
	{
		subarr[i]=arr[pos+i-1];
	}
	printf("%s",subarr);
}
