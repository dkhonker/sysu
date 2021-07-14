#include <stdio.h>
#define MAX 100
typedef struct QNode
{
	char *base;
	int front;
	int rear;
}quene; 

void build(quene &Q)
{
	Q.base=(char *)malloc(MAX * sizeof (char ));
	Q.front=Q.rear=0;	
}

void in(quene &Q,char x)
{
	Q.base[Q.rear]=x;
	Q.rear=(Q.rear+1)%m;
	printf("%d %d\n",Q.front,Q.rear);
}

void out(quene &Q,char x)
{
	Q.front=(Q.front+1)%m;
	printf("%d %d\n",Q.front,Q.rear);
}

void show(quene &Q)
{
	for(int i=0;i<m-Q.front;i++)
	{
		printf("%c",Q.base[Q.front]);
		Q.front=Q.front+1;
	}
}
int main()
{
	build(quene &Q);
	int m,n,t;
	char x;
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(t==1)
		{
			scanf("%c",&x);
			in(x);
		}
		else
		{
			out(x);
		}
	}
	show(Q);
 } 
