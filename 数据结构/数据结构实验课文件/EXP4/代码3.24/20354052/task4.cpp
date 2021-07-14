#include <stdio.h>
#include <string.h>
#define max 100
typedef struct
{
	char base[max+1];
	int front;
	int rear;
}quene;
int main()
{
	quene Q;
	Q.base=(char *)malloc (max *sizeof(char));
	Q.front=Q.rear=0;
	QElemType &e;
	int m,n,k;
	char x;
	scanf("%d %d\n",&m,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %c\n",&k,&x);
		if(k==1)
		{
			Q.base[Q.rear]=x;
			Q.rear = (Q.rear + 1) % max;
			rear++;
		}
		if(k==2)
		{
			
		}
		printf("%d %d",Q.front,Q.rear);
	}
	for(i=0;i<n;i++)
	{
		printf("%c",Q.base);
	}
}
