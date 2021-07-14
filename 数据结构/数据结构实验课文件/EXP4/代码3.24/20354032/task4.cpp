#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *q,m,n,flag=1;
	int front=0,rear=0;
	scanf("%d %d",&m,&n)
	q = (int*)malloc(m*sizeof(int));
	while(flag<=n)
	{
		int in;
		scanf("%d",&in);
		if(in==1)
		{
			scanf("%c",&q[rear]);
			rear = (rear+1)%m;
			printf("%d %d\n",front,rear);
		}
		if(in==2)
		{
			front = (front+1)%m;
			printf("%d %d\n",front,rear);
		}
	}
	for(int i = front;i<=rear;i++)
	{
		printf("%c",q[i]);
	}
} 
