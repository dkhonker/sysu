#include<stdio.h>
int main()
{
	int m,n,front,rear,order;
	char line[20],s;
	scanf("%d",&m);
	scanf("%d",&n);
	front=rear=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&order);
		scanf("%c",&s);
		if (order=1)
		{
			line[rear]=s;
			if (rear==m) rear=0;
			else rear++;
			printf("%d",front,rear);		
		}
		if (order=2)
		{
			if (front==m) front=0;
			else front++;
			printf("%d %d",front,rear);
		}
		if (front<rear)
			for(int i=front;i<rear;i++) printf("%c",line[i]);
		if (rear<front)
			for(int i=front;i<m;i++) printf("%c",line[i]);
			for(int i=0;i<rear;i++) printf("%c",line[i]) ;
	}
 } 
