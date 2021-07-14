#include<stdio.h>
#include<string.h>
#define LENG 100

typedef struct{
	char a[LENG];
	int front;
	int rear;
}node;
int main(){
	node Q;
	Q.front = 0;
	Q.rear = 0;
	int count = 0;
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i = 0;i < n;i++)
	{
		int j;
		char b;
		scanf("%d",&j);
		getchar();
		b = getchar();
		if(j == 1)
		{
			Q.a[count] = b;
			Q.rear = Q.rear+1;
			if(Q.rear == m)
			Q.rear = 0;
			printf("%d %d\n",Q.front,Q.rear);
			count ++;
		}
		if(j == 2)
		{
			Q.front = Q.front + 1;
			printf("%d %d\n",Q.front,Q.rear);
		}
		
	}
	if(Q.rear == 0)
	{
		for(int i = Q.front;i <= m;i++ )
			printf("%c",Q.a[i]);
		return 0;}
	else
	{
		for(int i = Q.front;i <= Q.rear ;i++ )
			printf("%c",Q.a[i]);
		return 0;
	}
}
