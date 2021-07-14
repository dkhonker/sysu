#include <stdio.h>
int main()
{
	int m,n,a[100],front=0,rear=0;
	char b[100];
	scanf("%d %d",&m,&n);
	char c[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
		b[i]=getchar();
	}
	
	for(int i=0;i<n;i++) 
	{
		if(a[i]==1)
		{
			c[rear]=b[i];
			rear=rear+1;
			if(rear==m) rear=0;
			printf("%d %d\n",front,rear);
		}
		if(a[i]==2)
		{
			c[front]=NULL;
			front=front+1;
			if(front==m) front=0;
			printf("%d %d\n",front,rear);
		}
	}
	
	for(int i=front;i!=rear+1;i++)
	{
		if(i==m) i=0;
		printf("%c",c[i]);
	}
	return 0;
} 
