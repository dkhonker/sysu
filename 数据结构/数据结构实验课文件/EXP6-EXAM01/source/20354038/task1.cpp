#include<stdio.h>
#define MAXSIZE 21

struct Queen{
	int rear;
	int front;
	char a[MAXSIZE];
}; 

int m,n;

void InitQueen(struct Queen *q){
	q->front = q->rear = 0;
}

int IsEmpty(struct Queen *q){
	if(q->front == q->rear)return 1;
	return 0;
}

int IsFull(struct Queen *q){
	if(q->front == (q->rear+1)%m)return 1;
	return 0;
}

int EnQueen(struct Queen *q, char ch){
	if(!IsFull(q)){
		q->a[q->rear%m] = ch;
		q->rear = (q->rear+1)%m;
		return 1;
	}
	else return 0;
}

short OutQueen(struct Queen *q){
	if(!IsEmpty(q)){
		q->front = (q->front+1)%m;
		return 1;
	}
	else return 0;
}

int main(){
	Queen q;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x == 1){
			char ch;
			getchar();
			ch = getchar();
			EnQueen(&q,ch);
			printf("%d %d\n",q.front,q.rear);
		}
		else if(x == 2){
			OutQueen(&q);
			printf("%d %d\n",q.front,q.rear);
		}
	}
	for(int i=q.front;i<q.rear;i++)
	{
		printf("%c",q.a[i]);
	}
	return 0;
}
