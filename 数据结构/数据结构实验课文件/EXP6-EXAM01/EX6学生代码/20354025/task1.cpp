#include<stdio.h>
int main()
{
	int m,n;
	int front,rear;
	scanf("%d %d",&m,&n);
	int a[n];
	char b[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
		if(i==0)
		{
			front=i;
			rear=i;
		}
		if(a[i]==1)
		{
			scanf("%c",&b[rear]);
			rear++;
		}
		else if(a[i]==2)
		{
			front++;
		}
		printf("%d %d\n",front,rear);
	}
	for(int i=front;i<rear;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
