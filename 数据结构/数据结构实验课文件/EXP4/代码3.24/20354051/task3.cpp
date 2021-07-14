#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20001];
	int pos,len;
	int i=0;
	scanf("%d",&pos);
	scanf("%d",&len);
	scanf("%s",arr);
	while(i!=pos-1)
	i++;
	for(;i<=len;++i)
	printf("%c",arr[i]);
}
