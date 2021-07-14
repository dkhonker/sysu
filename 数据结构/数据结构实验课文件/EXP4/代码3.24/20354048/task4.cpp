#include<stdio.h>
int main()
{
	int m,n,order,i,front=0,rear=0;
	int a,b;
	char s[101],data;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	{
		if(rear==100)
		{
			rear=100%m;
		}
		if(front==100)
		{
			front=100%m;
		}
		scanf("%d",&order);
		if(order==1)
		{
			getchar();
			scanf("%c",&data);
			s[rear]=data;
			rear++;
			a=front%m;
			b=rear%m;
			printf("%d %d\n",a,b);
		}
		else{
			front++;
			printf("%d %d\n",(front%m),(rear%m));
		}			
	}
	while(front!=rear)
	{
		printf("%c",s[front]);
		front++;
		if(front==100)
		{
			front=100%m;
		}
	}
	return 0;
}
