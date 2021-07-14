#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	char s[m];
	getchar();
	int front=0;
	int rear=0;
	for(int i=0;i<n;i++)
	{
		char c[5];
		gets(c);
		if (c[0]=='1')
		{
			s[rear]=c[2];
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
		}
		else
		{
			front=(front+1)%m;
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear)
	{
		printf("%c",s[front]);
		front =(front+1)%m;
	}
	
	return 0;
}
