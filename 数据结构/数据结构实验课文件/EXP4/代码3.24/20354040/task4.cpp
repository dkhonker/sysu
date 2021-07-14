#include<stdio.h>
int main()
{
	char sq[21],input;
	int m,n,i=0;
	int front=0,rear=0;
	int order;
	scanf("%d%d",&m,&n);
	for(i=0;((rear+1)%m)!=front&&i<n;i++)
	{
		scanf("%d%c",&order,&input);
		if(order==1)
		{
			sq[rear]=input;
			rear++;
			if(rear==m)
				rear=0;
			printf("%d %d\n",front,rear);
		}
		if(order==2)
		{
			sq[front]='\0';
			front++;
			if(front==m)
				front=0; 
			printf("%d %d\n",front,rear);
		}
		
	}
	for(i=front;i<rear;i++)
	printf("%c",sq[i]);
}
