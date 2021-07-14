#include<stdio.h>

int enter_cycque(char a[],int front,int rear,char x,int m)
{
	if(((rear+1)%m)==front)
	{
		return 0;
	}
	else
	{
		a[rear]=x;
		rear=(rear+1)%m;
		return 0;
	}
}

int leave_cycque(char a[],int front,int rear,int m,char *q)
{
	if(front==rear)
	{
		return 0;
	}
	else
	{
		*q=a[front];
		front=(front+1)%m;
		return 0;
	}
}

int main()
{
	int enter_cycque(char a[],int front,int rear,char x,int m);
	int leave_cycque(char a[],int front,int rear,int m,char *q);
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	char a[21];
	char x;
	char *q;
	int front,rear,order;
	front=0;
	rear=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&order);
		getchar();
		if(order==1)
		{
			scanf("%c",&x);
			getchar();
			enter_cycque(a,front,rear,x,m);
			printf("%d %d",front,rear);
		}
		if(order==2)
		{
			leave_cycque(a,front,rear,m,q);
			printf("%d %d",front,rear);
		}	  
	}
	return 0;
}
