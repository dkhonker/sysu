#include <stdio.h>
#include <string.h>
int main()
{
	int m,n;
	char a[21];
	int p=0;
	scanf("%d",&m);
	scanf("%d",&n);
	if(n==0)
	return 0;
	int front=0,rear=0,order;
	for(int i=0;i<n;++i)
	{
	scanf("%d",&order);
	if(order==1)
	{
		scanf("%c",&a[p++]);
		printf("%d",front);
		printf("%d",++rear);
	}
	else if(order==2)
	printf("%d",front++);
	}
	} 
