#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
	char* base;
	int front;
	int rear;
}Queue; 

int main()
{
	//建立空队列
	Queue Q;
	int m,n;
	int num;
	char s;
	char null;
	int count = 0;
	int i;
	scanf("%d%d",&m,&n);
	Q.base = (char*)malloc(m*sizeof(char));
	Q.front = 0;
	Q.rear = 0;
	while(((Q.rear-Q.front+1+m)%m!=m)&&(count!=n))
	{
		count = count+1;
		scanf("%d",&num);
		scanf("%c",&s); 
		if(num==1)
		{
			scanf("%c",&s);
			Q.base[Q.rear] = s;
			Q.rear = (Q.rear+1)%m;
			printf("%d %d\n",Q.front,Q.rear);
		}
		else if(num==2)
		{
			Q.front = Q.front+1;
			printf("%d %d\n",Q.front,Q.rear);
		}
	}
	

	 for(int i=Q.front;i<Q.front+count-1;i++)
	 {
	 	printf("%c",Q.base[i]);
	 }
	return 0;
}
